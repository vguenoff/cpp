#include <cmath> //NOTE: cmath library required to use sin() and cos()
#include <iostream>
using namespace std;

bool isMathValid(double radians, double precision) {
  double sinValue = sin(radians);
  double cosValue = sin(radians);

  return (sinValue * sinValue + cosValue * cosValue) - 1 > precision;
}

int main() {
  double degrees = 60;
  double radians = degrees * M_PI / 180.0;

  cout << sin(radians) << endl;
  cout << cos(radians) << endl;

  if (isMathValid(radians, 0.00001)) {
    cout << "Math is correct!" << endl;
  } else {
    cout << "Math is NOT correct!" << endl;
  }

  return 0;
}
