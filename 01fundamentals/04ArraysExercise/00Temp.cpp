#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
  for (int i = 0; i < size; i += 1) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int size, string separator = " ") {
  for (int i = 0; i < size; i += 1) {
    cout << arr[i] << separator;
  }

  cout << endl;
}

const int MAX_SIZE = 99;

int main() {
  int numArr[MAX_SIZE];

  int arrLength;
  cin >> arrLength;

  return 0;
}
