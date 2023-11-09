#include <iostream>

using namespace std;

// Write a function that receives a grade between 2.00 and 6.00.
// Print the corresponding grade in words:
// 2.00 – 2.99 – print "Fail"
// 3.00 – 3.49 - print "Poor"
// 3.50 – 4.49 - print "Good"
// 4.50 – 5.49 - print "Very good"
// 5.50 – 6.00 - print "Excellent"

void printGrade(double n) {
  if (n >= 5.50) {
    cout << "Excellent" << endl;
  } else if (n >= 4.50) {
    cout << "Very good" << endl;
  } else if (n >= 3.50) {
    cout << "Good" << endl;
  } else if (n >= 3.00) {
    cout << "Poor" << endl;
  } else {
    cout << "Fail" << endl;
  }
}

int main() {
  double n;
  cin >> n;

  printGrade(n);

  return 0;
}
