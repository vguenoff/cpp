#include <iostream>

using namespace std;

// Read an integer number N (N < 100) from the first line of the console, which
// represents size of the arrays
// On the next N lines, read two integer numbers
// Form two arrays as shown below
// Print two arrays, each on the separate line
// Elements in the arrays have to be printed, separated by single space

const int MAX_SIZE = 99;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i += 1) {
    cout << arr[i] << ' ';
  }

  cout << endl;
}

int main() {
  int numArrA[MAX_SIZE], numArrB[MAX_SIZE];
  int arrLength;
  cin >> arrLength;

  for (int i = 0; i < arrLength; i += 1) {
    if (i % 2 == 0) {
      cin >> numArrA[i] >> numArrB[i];
    } else {
      cin >> numArrB[i] >> numArrA[i];
    }
  }

  printArray(numArrA, arrLength);
  printArray(numArrB, arrLength);

  return 0;
}
