#include <iostream>
using namespace std;

// default values
int getMax(int a = 1, int b = 2) {
  if (a > b) {
    return a;
  }

  return b;
}

int main() {
  cout << getMax(5, 7) << endl;

  return 0;
}
