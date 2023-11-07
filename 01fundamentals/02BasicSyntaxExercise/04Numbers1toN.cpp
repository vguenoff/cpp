#include <iostream>

using namespace std;

// Write a program that:
// · Read the integer number N from the console
// · Print all numbers from 1 to N (inclusively) to the console on a single line
// Note: The number N will always be larger than or equal to 1.

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i += 1) {
    cout << i << ' ';
  }

  cout << endl;

  return 0;
}
