#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> squareRoots;
  // squareRoots.reserve(100); //

  for (int i = 0; i < 100; i++) {
    // this allocates memory same way as .reserve() but dynamically
    squareRoots.push_back(sqrt(i));
  }

  vector<char> letters{'x', 'y', 'z'};
  vector<char> otherLetters = {'x', 'y', 'z'};

  return 0;
}
