#include <iostream>

using namespace std;

// Create a function that prints the sign of an integer number n.
// Print:
// "The number {number} is positive." – if the number < 0
// "The number {number} is negative."– if the number > 0
// "The number {number} is zero." – if the number == 0

void printSign(int n, string sign) {
  cout << "The number " << n << " is " << sign << "." << endl;
}

void getSign(int n) {
  if (n > 0) {
    printSign(n, "positive");
  } else if (n == 0) {
    printSign(n, "zero");
  } else {
    printSign(n, "negative");
  }
}

int main() {
  int n;
  cin >> n;

  getSign(n);

  return 0;
}
