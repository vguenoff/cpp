#include <iostream>

using namespace std;

// Read an integer number N (N < 100) from the first line of the console, which
// represents size of the arrays
// On the next N lines, read two integer numbers
// Form two arrays as shown below
// Print two arrays, each on the separate line
// Elements in the arrays have to be printed, separated by single space

void printArray(int arr[], int size, string separator = " ") {
  for (int i = 0; i < size; i += 1) {
    cout << arr[i] << separator;
  }

  cout << endl;
}

const int MAX_SIZE = 99;

int main() {
  int numArrA[MAX_SIZE], numArrB[MAX_SIZE];
  int arrLength;
  cin >> arrLength;

  int *first = numArrA;
  int *second = numArrB;

  for (int i = 0; i < arrLength; i += 1) {
    cin >> first[i] >> second[i];

    int *temp = first;
    first = second;
    second = temp;
  }

  printArray(numArrA, arrLength);
  printArray(numArrB, arrLength);

  return 0;
}
