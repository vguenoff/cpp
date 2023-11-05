#include <iostream>

using namespace std;

// Write a program that takes as an input a grade (floating-point number).
// Prints:
// · "Passed!" if the grade is equal or more than 3.00
// · "Failed!" if the grade is lower than 3.00

// Input
// The input comes as a single double number.

// Output
// The output is either "Passed!" if the grade is more than 2.99, otherwise, you
// should print "Failed!

int main() {
  double grade;
  cin >> grade;

  if (grade >= 3.00) {
    cout << "Passed!" << endl;
  } else {
    cout << "Failed!" << endl;
  }

  return 0;
}
