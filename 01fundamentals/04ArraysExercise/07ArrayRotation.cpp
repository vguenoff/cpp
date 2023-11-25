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
// the console, which represents count rotations you have to perform One
// rotation is when the first element goes at the end (first element becomes
// last element) Print the resulting array elements, separated by single space

int main() {
  int arr[MAX_SIZE];

  size_t arrSize;
  enterArray(arr, arrSize);

  size_t rotations;
  cin >> rotations;

  while (rotations--) {
    int first = arr[0];

    for (size_t i = 0; i < arrSize; i += 1)
      arr[i] = arr[i + 1];

    arr[arrSize - 1] = first;
  }

  printArray(arr, arrSize);

  return 0;
}

// 5
// 51 47 32 61 21
// 2
