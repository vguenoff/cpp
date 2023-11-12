#include <iostream>

using namespace std;

// Create a function for printing triangle as shown in the examples below.

void printNumbersOneToMax(int max) {
  int j = 1;

  while (j <= max) {
    cout << j << ' ';
    j += 1;
  }

  cout << endl;
}

void printTriangle(int side) {
  for (int i = 1; i <= side; i += 1) {
    printNumbersOneToMax(i);
  }

  for (int i = side - 1; i > 0; i -= 1) {
    printNumbersOneToMax(i);
  }
}

int main() {
  int side;
  cin >> side;

  printTriangle(side);

  return 0;
}
