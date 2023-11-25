#include <climits>
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
// represents size of the array Read an integer array with the given size from
// the second line of the console Read an integer number from the third line of
// the console, which represents magic sum Print all unique pairs in an array of
// integers whose sum is equal to the given magic sum

int main() {
  int arr[MAX_SIZE];

  size_t arrSize;
  enterArray(arr, arrSize);

  int magicSum;
  cin >> magicSum;

  for (size_t i = 0; i < arrSize; i += 1) {
    for (size_t j = i + 1; j < arrSize; j += 1) {
      if (arr[i] + arr[j] == magicSum) {
        cout << arr[i] << ' ' << arr[j] << endl;
      }
    }
  }

  return 0;
}

// 6
// 1 7 6 2 19 23
// 8
