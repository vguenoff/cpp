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
// the second line of the console Find and print the product of each of its
// elements with all elements Example: For the array {1, 7, 3} the result would
// be: {1*1, 1*7, 1*3, 7*1, 7*7, 7*3, 3*1, 3*7, 3*3}, which gives us the array
// {1, 7, 3, 7, 49, 21, 3, 21, 9}, so for the input 1 7 3, the program should
// print 1 7 3 7 49 21 3 21 9.

int main() {
  int arr[MAX_SIZE];

  size_t arrSize;
  enterArray(arr, arrSize);

  for (size_t i = 0; i < arrSize; i += 1) {
    int a = arr[i];

    for (size_t j = 0; j < arrSize; j += 1) {
      int b = arr[j];

      cout << a * b << ' ';
    }
  }

  cout << endl;

  return 0;
}

// 3
// 1 7 3
