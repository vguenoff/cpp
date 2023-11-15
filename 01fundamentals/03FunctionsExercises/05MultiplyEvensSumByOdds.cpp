#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number
// Multiply the sum of all its even digits by the sum of all its odd digits
// Print the result of the multiplication

bool isEven(int n) { return n % 2 == 0; }

int main() {
  int n;
  cin >> n;

  n = abs(n);

  int isEvenSum = 0, isOddSum = 0;

  while (n > 0) {
    int lastDigit = n % 10;

    if (isEven(lastDigit)) {
      isEvenSum += lastDigit;
    } else {
      isOddSum += lastDigit;
    }

    n /= 10;
  }

  cout << isEvenSum * isOddSum << endl;

  return 0;
}
