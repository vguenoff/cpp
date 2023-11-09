#include <iostream>
using namespace std;

// Using the same name and return type
int getMax(int a, int b) {
  if (a > b) {
    return a;
  }

  return b;
}

// but with different parameter list (including different types types)
int getMax(int a, int b, int c) { return getMax(a, getMax(b, c)); }

// this is also OK
double getMax(double a, double b) {
  if (a > b) {
    return a;
  }

  return b;
}

int main() {
  cout << getMax(5, 7) << endl;
  cout << getMax(5, 42, 7) << endl;
  cout << getMax(5.0, 7.0) << endl;

  return 0;
}
