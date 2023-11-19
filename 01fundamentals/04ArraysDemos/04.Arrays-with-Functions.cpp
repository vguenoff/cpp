#include <iostream>

using namespace std;

void printArray(int arr[], int arrSize, int startIndex = 0) {
  for (int i = startIndex; i < arrSize; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  const int NUMBERS_LENGTH = 3;
  int numbers[NUMBERS_LENGTH] = {1, 2, 3};

  printArray(numbers, NUMBERS_LENGTH, 1); // 2 3

  return 0;
}
