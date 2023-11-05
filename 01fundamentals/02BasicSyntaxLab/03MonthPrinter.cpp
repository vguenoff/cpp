#include <iostream>

using namespace std;

// Write a program that takes an integer from the console and prints the
// corresponding month. If the number is more than 12 or less than 1 print
// "Error!". Input You will receive a single integer on a single line. Output If
// the number is within the boundaries, print the corresponding month,
// otherwise, print "Error!".

int main() {
  int num;
  cin >> num;

  switch (num) {
  case 1:
    cout << "January" << endl;
    break;
  case 2:
    cout << "February" << endl;
    break;
  case 3:
    cout << "March" << endl;
    break;
  case 4:
    cout << "April" << endl;
    break;
  case 5:
    cout << "May" << endl;
    break;
  case 6:
    cout << "June" << endl;
    break;
  case 7:
    cout << "July" << endl;
    break;
  case 8:
    cout << "August" << endl;
    break;
  case 9:
    cout << "September" << endl;
    break;
  case 10:
    cout << "October" << endl;
    break;
  case 11:
    cout << "November" << endl;
    break;
  case 12:
    cout << "December" << endl;
    break;

  default:
    cout << "Error!" << endl;
    break;
  }

  return 0;
}
