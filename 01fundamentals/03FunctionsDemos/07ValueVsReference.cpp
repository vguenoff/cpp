#include <iostream>
using namespace std;

int square(int num) {
  // by value - makes a copy
  // param num is not modified
  num = num * num;

  return num;
}

void swap(int &a, int &b) {
  // changes the original vars
  // not the copies
  int oldA = a;
  a = b;
  b = oldA;
}

void addOneByValue(int x) { x++; }

void addOneByReference(int &x) { x++; }

int main() {
  int x = 5;
  int y = 42;

  cout << "original X: " << x << endl; // 5
  cout << "original Y: " << y << endl; // 42

  cout << "X^2: " << square(x) << endl; // 25

  swap(x, y);
  cout << "new X: " << x << endl; // 42
  cout << "new Y: " << y << endl; // 5

  int a = 0;

  addOneByValue(a);
  cout << a << endl; // a = 0

  addOneByReference(a);
  cout << a << endl; // a = 1
}
