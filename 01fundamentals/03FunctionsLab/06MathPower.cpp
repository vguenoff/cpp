#include <iostream>

using namespace std;

// Create a function that calculates and returns the value of a number raised to
// a given power.

long calcPow(long n, long power) {
  long result = n;

  if (power == 0) {
    return 1;
  }

  for (int i = 1; i < power; i += 1) {
    result *= n;
  }

  return result;
}

int main() {
  long n;
  long power;
  cin >> n >> power;

  cout << calcPow(n, power) << endl;

  return 0;
}
