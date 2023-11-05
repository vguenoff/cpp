#include <iostream>

using namespace std;

// Write a program that prints all the numbers (on separate line) from 1 to 100,
// which are divisible by 3. You have to use a single for loop. The program
// should not receive input.

int main() {
  for (int i = 1; i <= 100; i += 1) {
    if (i % 3 == 0) {
      cout << i << endl;
    }
  }

  return 0;
}
