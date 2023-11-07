#include <iostream>

using namespace std;

// Write a program that shows the sign (+ or -) of the product of three real
// numbers without calculating it.
// · Read 3 real numbers from the console (on a single line, separated by
// spaces)
// · Print the sign of their product(if the product is 0, print '+')

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (a == 0 || b == 0 || c == 0) {
    cout << '+' << endl;

    return 0;
  }

  int negativeCount = 0;

  if (a < 0)
    negativeCount += 1;
  if (b < 0)
    negativeCount += 1;
  if (c < 0)
    negativeCount += 1;

  if (negativeCount % 2 == 0) {
    cout << '+' << endl;
  } else {
    cout << '-' << endl;
  }

  // if (a == 0 || b == 0 || c == 0)
  //   cout << '+' << endl;
  // else if (a < 0 && b >= 0 && c >= 0)
  //   cout << '-' << endl;
  // else if (a >= 0 && b < 0 && c >= 0)
  //   cout << '-' << endl;
  // else if (a >= 0 && b >= 0 && c < 0)
  //   cout << '-' << endl;
  // else if (a < 0 && b < 0 && c >= 0)
  //   cout << '+' << endl;
  // else if (a >= 0 && b < 0 && c < 0)
  //   cout << '+' << endl;
  // else if (a < 0 && b >= 0 && c < 0)
  //   cout << '+' << endl;
  // else if (c < 0 && b < 0 && a < 0)
  //   cout << '-' << endl;
  // else
  //   cout << '+' << endl;

  return 0;
}
