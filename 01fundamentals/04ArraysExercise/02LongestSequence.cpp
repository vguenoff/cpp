#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number N (N < 100) from the first line of the console, which
// represents size of the array
// Read an integer array with the given size from the second line of the console
// Finds the longest sequence of equal elements in the given integer array
// Prints that sequence on the console (integer numbers are separated by single
// space on a single line)

// Note : If there is more than one such sequence, print the last one.

const int MAX_SIZE = 99;

void enterArray(int arr[], int &arrSize) {
  cin >> arrSize;

  if (arrSize > MAX_SIZE) {
    cout << "Buffer too small. Needed: " << arrSize << endl;
    exit(1);
  }

  for (size_t i = 0; i < arrSize; i += 1) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int size, string separator = " ") {
  for (int i = 0; i < size; i += 1) {
    cout << arr[i] << separator;
  }

  cout << endl;
}

int main() {
  int numArr[MAX_SIZE];
  int arrSize;

  enterArray(numArr, arrSize);

  size_t longestSeqLength = 1;
  int longestElement = numArr[0];

  size_t currentSeqLength = 1;
  int currentLongestElement = numArr[0];

  for (size_t i = 0; i < arrSize; i += 1) {
  }

  return 0;
}

// 10
// 13 10 10 10 10 10 1 4 2 10

// 5
// 13 42 19 21 103
