#include <iostream>

using namespace std;

// Write a program that prints the next n odd numbers (starting from 1) and on
// the last row prints the sum of them.
// Input
// On the first line, you will receive a number – n. This number shows how many
// odd numbers you should print.
// Output
// Print the next n odd numbers, starting from 1, separated by new lines. On the
// last line, print the sum of these numbers.
// Constraints
// · n will be in the interval [1…100]

int main() {
  int num;
  cin >> num;

  int i = 0, oddNum = 1, sumOdd = 0;

  while (i < num) {
    sumOdd += oddNum;
    i += 1;

    cout << oddNum << endl;

    oddNum += 2;
  }

  cout << "Sum: " << sumOdd << endl;

  return 0;
}
