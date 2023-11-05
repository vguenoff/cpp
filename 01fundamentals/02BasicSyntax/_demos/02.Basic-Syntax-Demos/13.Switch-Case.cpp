#include <iostream>

using namespace std;

int main() {
  int day = 5;

  switch (day) {
  case 1:
    cout << "Monday" << endl;
    break;
  case 2:
    cout << "Tuesday" << endl;
    break;
  case 3:
    cout << "Wednesday" << endl;
    break;
  case 4:
    cout << "Thursday" << endl;
    break;
  case 5:
    cout << "Friday 1" << endl;
    cout << "Friday 2" << endl;
    cout << "Friday 3" << endl;
    cout << "Friday 4" << endl;
  case 6:
    cout << "Saturday" << endl;
  case 7:
    cout << "Sunday" << endl;
    break;
  default:
    cout << "Error!" << endl;
    break;
  }
}
