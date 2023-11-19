#include <array>
#include <iostream>

using namespace std;

const int arraySize = 3;

void printByCopy(array<int, arraySize> numbers) {
  for (int number : numbers) {
    cout << number << ' ';
  }
}

void printByReference(const array<int, arraySize> &numbers) {
  for (int number : numbers) {
    cout << number << ' ';
  }
}

int main() {
  array<int, arraySize> numbers = {13, 42, 69};

  // copy
  for (int number : numbers) {
    cout << number << ' ';
    ++number;
  }
  cout << "\n==================" << endl;

  printByCopy(numbers);
  cout << "\n==================" << endl;

  // reference
  for (int &number : numbers) {
    cout << number << ' ';
    ++number;
  }

  cout << "\n==================" << endl;

  printByReference(numbers);
  printByReference(numbers);

  return 0;
}
