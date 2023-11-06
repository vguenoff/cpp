#include <iostream>

using namespace std;

// Write a program that:
// · Read two integers from the console
// · Print the two numbers in increasing order

int main() {
  int a, b;
  cin >> a >> b;

  if (a < b)
    cout << a << " " << b << endl;
  else
    cout << b << " " << a << endl;

  return 0;
}
