#include <iostream>

using namespace std;

// Write a program that:
// Read integer number N from the first line of the console (N < 100)
// Read N integer numbers from the next N lines of the console
// Print entered numbers in reverse order

const int MAX_SIZE = 99;

int main() {
  int arrLength;
  cin >> arrLength;

  int numbersArr[MAX_SIZE];

  for (int i = 0; i < arrLength; i += 1) {
    cin >> numbersArr[i];
  }

  for (int i = arrLength - 1; i >= 0; i -= 1) {
    cout << numbersArr[i] << ' ';
  }

  cout << endl;

  return 0;
}
