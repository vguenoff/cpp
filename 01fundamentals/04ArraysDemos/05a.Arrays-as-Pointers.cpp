#include <iostream>

using namespace std;

void printArray(int *arr, int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    // cout << arr[i] << " ";
    cout << *(arr + i) << " "; // these are equivalent
  }

  cout << endl;
}

int main() {
  const int NUMBERS_LENGTH = 3;

  int numbers[NUMBERS_LENGTH] = {1, 2, 3};
  int *arrPtr = numbers;

  arrPtr[2] = 100;

  printArray(numbers, NUMBERS_LENGTH);
  printArray(arrPtr, NUMBERS_LENGTH);

  cout << "arrPtr: " << arrPtr << endl;
  cout << "arrPtr[0]: " << arrPtr[0] << ' ' << *arrPtr << endl;
  cout << "&arrPtr[0]: " << &arrPtr[0] << endl;
  cout << "arrPtr[1]: " << arrPtr[1] << endl;
  cout << "&arrPtr[1]: " << &arrPtr[1] << endl;

  return 0;
}
