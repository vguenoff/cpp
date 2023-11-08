#include <cmath>
#include <iostream>

using namespace std;

// Write a program that enters the coefficients a, b, and c of a quadratic
// equation a * x2 + b * x + c = 0 and calculates and prints its real solutions.
// Note that quadratic equations may have 0, 1, or 2 real solutions. You can
// check your program against this:
// https://www.mathsisfun.com/quadratic-equation-solver.html

// The numbers a, b, and c will be entered on a single line from the console,
// separated by spaces.

// If the quadratic equation has no real roots (e.g. if the Discriminant is less
// than 0), print "no roots".

// If it has one real root print it, if it has two roots, print them on a single
// line, separated by a single space.

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  double discriminant = pow(b, 2) - 4 * a * c;

  if (discriminant < 0) {
    cout << "no roots" << endl;

    return 0;
  }

  // calc first solution
  cout << (-b + sqrt(discriminant)) / (2 * a);

  if (discriminant > 0)
    // add second solution if any
    cout << ' ' << (-b - sqrt(discriminant)) / (2 * a);

  cout << endl;

  return 0;
}
