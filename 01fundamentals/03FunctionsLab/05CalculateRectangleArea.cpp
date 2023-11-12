#include <iostream>

using namespace std;

// Create a function that calculates and returns the area of a rectangle by
// given width and height.

int calculateRectangleArea(int w, int h) { return w * h; }

int main() {
  int w, h;
  cin >> w >> h;

  cout << calculateRectangleArea(w, h) << endl;

  return 0;
}
