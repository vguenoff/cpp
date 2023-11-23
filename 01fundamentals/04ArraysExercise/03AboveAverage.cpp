#include <iostream>

using namespace std;

const int MAX_SIZE = 99;

void enterArray(int arr[], size_t &arrSize) {
  cin >> arrSize;

  if (arrSize > MAX_SIZE) {
    cout << "Buffer too small. Needed: " << arrSize << endl;
    exit(1);
  }

  for (size_t i = 0; i < arrSize; i += 1) {
    cin >> arr[i];
  }
}

void printArray(int arr[], size_t size, string separator = " ") {
  for (size_t i = 0; i < size; i += 1) {
    cout << arr[i] << separator;
  }

  cout << endl;
}

// Write a program that:
// Read an integer number N (N < 100) from the first line of the console, which
// represents size of the array
// Read an integer array with the given size from the second line of the console
// Find all numbers which are larger than or equal to the mathematical average
// of the numbers in the array
// The numbers should be printed on a single line, separating the output number
// by spaces.

// Note: The output numbers should be in the same order as they were in the
// input.

int main() {
  int arr[MAX_SIZE], newArr[MAX_SIZE], arraySum = 0;

  size_t arrSize;
  enterArray(arr, arrSize);

  for (size_t i = 0; i < arrSize; i += 1) {
    arraySum += arr[i];
  }

  size_t newArrSize = 0;
  for (size_t i = 0; i < arrSize; i += 1) {
    if (arr[i] >= arraySum / (int)arrSize) {
      newArr[newArrSize] = arr[i];
      newArrSize += 1;
    }
  }

  printArray(newArr, newArrSize);

  return 0;
}

// 5
// 1 2 3 4 5

// 6
// 5 4 3 8 9 0
