#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number (< 100), which represents size of the array, from
// the first line of the console
// Read an array of integer numbers from the second line of the console
// Sum only the even numbers from the given array
// Print calculated sum

const int MAX_SIZE = 99;

int main() {
  int numbersArr[MAX_SIZE] = {};

  int arrLength;
  cin >> arrLength;

  for (int i = 0; i < arrLength; i += 1) {
    cin >> numbersArr[i];
  }

  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0; i < arrLength; i += 1) {
    int n = numbersArr[i];
    if (n % 2 == 0) {
      evenSum += n;
    } else {
      oddSum += n;
    }
  }

  cout << evenSum - oddSum << endl;

  return 0;
}
