#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  double discriminant = pow(b, 2) - 4 * a * c;

  double x1 = (-b + sqrt(discriminant)) / (2 * a);
  double x2 = (-b - sqrt(discriminant)) / (2 * a);

  if (discriminant > 0)
    cout << x1 << ' ' << x2 << endl;
  else if (discriminant == 0)
    cout << x1 << endl;
  else
    cout << "no roots" << endl;

  return 0;
}
