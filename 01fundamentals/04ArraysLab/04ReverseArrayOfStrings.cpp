#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number ( < 100), which represents size of the array, from the
// first line of the console
// Read an array of strings (space-separated), from the second line of the
// console
// Reverse the given array
// Print reversed array on a single line (space separated)

const int MAX_SIZE = 99;

void reverseArray(string sArr[], int size) {
  int half = size / 2;

  for (int i = 0; i < half; i += 1) {
    string a = sArr[i];
    string b = sArr[(size - 1) - i];

    sArr[i] = b;
    sArr[(size - 1) - i] = a;
  }
}

int main() {
  int actualSize;
  cin >> actualSize;

  string stringArr[MAX_SIZE];

  for (int i = 0; i < actualSize; i += 1) {
    cin >> stringArr[i];
  }

  reverseArray(stringArr, actualSize);

  for (string s : stringArr) {
    cout << s << ' ';
  }

  cout << endl;

  return 0;
}
