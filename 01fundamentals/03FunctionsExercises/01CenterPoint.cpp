#include <cmath>
#include <iostream>

using namespace std;

// Write a program that:
// Read four integer numbers (coordinates of two points on a Cartesian
// coordinate system) From the first line – coordinate X of the first point From
// the second line – coordinate Y of the first point From the third line –
// coordinate X of the second point From the forth line – coordinate Y of the
// second point Create a method that prints coordinates of the given point that
// is closest to the center of the coordinate system (0, 0) in the format: (X,
// Y) Note: If the points are at the same distance from the center, print only
// the first point coordinates.

int main() {
  double ax, ay, bx, by;
  cin >> ax >> ay >> bx >> by;

  double distance1 = sqrt(pow(ax, 2) + pow(ay, 2));
  double distance2 = sqrt(pow(bx, 2) + pow(by, 2));

  if (distance1 <= distance2) {
    cout << "(" << ax << ", " << ay << ")" << endl;
  } else {
    cout << "(" << bx << ", " << by << ")" << endl;
  }

  return 0;
}
