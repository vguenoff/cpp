#include <iostream>
using namespace std;

// Declaration (to avoid error)
int getMax(int a, int b);

int main() {
  cout << getMax(5, 7) << endl;

  return 0;
}

// Definition
int getMax(int a, int b) {
  int maxValue;
  if (a > b) {
    maxValue = a;
  } else {
    maxValue = b;
  }

  return maxValue;
}
