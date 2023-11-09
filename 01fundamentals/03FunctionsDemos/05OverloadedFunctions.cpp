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

void f1(int b) { b = b * 5; }
void f1(int &b) { b = b + 1; }

int main() {
  int a = 5;

  cout << getMax(5, 7) << endl;
  cout << getMax(5, 42, 7) << endl;
  cout << getMax(5.0, 7.0) << endl;

  f1((int)a);
  cout << a << endl;
  // f1((int &)a); // more than one instance of overloaded function "f1" matches
  // the argument list:C/C++(308)

  return 0;
}
