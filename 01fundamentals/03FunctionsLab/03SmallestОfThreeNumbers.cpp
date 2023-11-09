#include <iostream>

using namespace std;

// Write a function to print the smallest of three integer numbers. Use an
// appropriate name for the function.

int getMinNumber(int a, int b) { return a < b ? a : b; }

int getMinNumber(int a, int b, int c) {
  return getMinNumber(getMinNumber(a, b), c);
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << getMinNumber(a, b, c) << endl;

  return 0;
}
