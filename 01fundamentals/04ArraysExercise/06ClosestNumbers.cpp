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
// the second line of the console Finds the two closest (by value) integer
// numbers in the array Prints the absolute difference between them

int main() {
  int arr[MAX_SIZE];

  size_t arrSize;
  enterArray(arr, arrSize);

  int diff;

  if (arrSize == 1) {
    diff = 0;
  } else {
    diff = INT_MAX;
  }

  for (size_t i = 0; i < arrSize; i += 1) {
    for (size_t j = i + 1; j < arrSize; j += 1) {
      int currDiff = abs(arr[i] - arr[j]);

      if (currDiff < diff) {
        diff = currDiff;
      }
    }
  }

  cout << diff << endl;

  return 0;
}

// 5
// 1 105 10 100 3
// The closest numbers are 1 and 3
// output = abs(1 - 3) = abs (-2) = 2
