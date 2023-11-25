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
// the second line of the console Find all the top integers in an array Top
// integer is an integer that is bigger than all the elements to its right Print
// all top integers, separated by single space

int main() {
  int arr[MAX_SIZE];

  size_t arrSize;
  enterArray(arr, arrSize);

  for (size_t i = 0; i < arrSize - 1; i += 1) {
    int a = arr[i];

    int bigger = true;

    for (size_t j = i + 1; j < arrSize; j += 1) {
      if (a <= arr[j]) {
        bigger = false;
        break;
      }
    }

    if (bigger) {
      cout << a << ' ';
    }
  }

  cout << arr[arrSize - 1] << endl;

  return 0;
}

// 6
// 14 24 24 19 15 17
