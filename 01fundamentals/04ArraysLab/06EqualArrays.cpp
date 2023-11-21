#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number (< 100), which represents size of the arrays, from the
// first line of the console
// Read two integer arrays from the next two lines of the console
// Arrays are identical if their elements are equal
// Print on the console whether they are identical or not
// If the arrays are identical, find the sum of the first one and print on the
// console the following message: "Arrays are identical. Sum: {sum}" Otherwise
// find the first index where the arrays differ and print on the console
// following message:
// "Arrays are not identical. Found difference at {index} index."

const int MAX_SIZE = 99;

void readArray(int arr[], int size) {
  for (int i = 0; i < size; i += 1) {
    cin >> arr[i];
  }
}

int main() {
  int numArrA[MAX_SIZE], numArrB[MAX_SIZE], sumArrA = 0;

  int arrLength;
  cin >> arrLength;

  readArray(numArrA, arrLength);
  readArray(numArrB, arrLength);

  for (int i = 0; i < arrLength; i += 1) {
    if (numArrA[i] != numArrB[i]) {
      cout << "Arrays are not identical. Found difference at " << i << " index."
           << endl;
      return 0;
    }

    sumArrA += numArrA[i];
  }

  cout << "Arrays are identical. Sum: " << sumArrA << endl;

  return 0;
}
