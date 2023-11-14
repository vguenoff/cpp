#include <iostream>

using namespace std;

// Write a program that:
// Read two integer numbers
// Calculate the factorial of each number
// Divide the factorial of the first number by the factorial of the second
// number Print the division, formatted to the second decimal point

double factorial(int n) {
  double result = 1;
  for (int i = 2; i <= n; i += 1) {
    result *= i;
  }

  return result;
}

int main() {
  int a, b;
  cin >> a >> b;

  double result = factorial(a) / factorial(b);

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << result << endl;

  return 0;
}
