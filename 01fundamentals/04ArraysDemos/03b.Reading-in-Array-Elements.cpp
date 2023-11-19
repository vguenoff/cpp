#include <iostream>

using namespace std;

int main() {
  // const int MaxCount = 100;
  // int numbers[MaxCount] = {};

  // Note: reading in a number for the array size is also supported by most C++
  // compilers, but is not officially supported by C++ standards (it is part of
  // the C99 standard)
  // int numbers[actualCount];
  int actualCount;
  cin >> actualCount;

  int numbers[actualCount];

  for (int i = 0; i < actualCount; i++) {
    cin >> numbers[i];
  }

  for (int i = 0; i < actualCount; i++) {
    cout << numbers[i] << ' ';
  }

  cout << endl;

  return 0;
}
