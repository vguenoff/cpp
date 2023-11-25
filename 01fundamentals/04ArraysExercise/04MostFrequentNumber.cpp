#include <climits>
#include <iostream>

using namespace std;

const int MAX_SIZE = 99, INDEX_MAX_SIZE = 10;

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

// Integer numbers in the array will be in the range [0, 9]

// Find the most frequent number in the given integer array
// Print the most frequent number
// Note: In case of multiple numbers with the same maximal frequent, print all
// of them, ordered from smallest

int findMaxCount(int arr[], size_t size = INDEX_MAX_SIZE) {
  int maxCount = INT_MIN;

  for (size_t i = 0; i < size; i += 1) {
    if (arr[i] > maxCount) {
      maxCount = arr[i];
    }
  }

  return maxCount;
}

int main() {
  int arr[MAX_SIZE], indexCounter[INDEX_MAX_SIZE];
  size_t arrSize;

  enterArray(arr, arrSize);

  for (size_t i = 0; i < arrSize; i += 1) {
    int currentNumber = arr[i];
    indexCounter[currentNumber] += 1;
  }

  int maxCount = findMaxCount(indexCounter);

  for (size_t i = 0; i < INDEX_MAX_SIZE; i += 1) {
    if (indexCounter[i] == maxCount) {
      cout << i << ' ';
    }
  }

  cout << endl;

  return 0;
}

// 16
// 4 1 1 4 2 3 4 4 1 2 4 9 3 3 3 3
// 3 4

// 5
// 0 0 0 1 0
// 0
