#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number (< 100), which represents size of the array, from
// the first line of the console
// Read an array of integer numbers from the second line of the console
// Sum only the even numbers from the given array
// Print calculated sum

int main() {
  int arrLength;
  cin >> arrLength;

  int numbersArr[arrLength];

  for (int i = 0; i < arrLength; i += 1) {
    cin >> numbersArr[i];
  }

  int evenSum = 0;
  for (int n : numbersArr) {
    if (n % 2 == 0) {
      evenSum += n;
    }
  }

  cout << evenSum << endl;

  return 0;
}
