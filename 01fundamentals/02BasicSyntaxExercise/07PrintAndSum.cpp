#include <iostream>

using namespace std;

// Write a program that:
// · Read an integer number (start number) on the first line from the console
// · Read an integer number (end number) on the second line from the console
// · Print numbers from given start number to given end number
// · Print their sum in the following format: "Sum: {sum}"
// Note: All the numbers will be integers.

int main() {
  int a, b, sum = 0;
  cin >> a >> b;

  for (int i = a; i <= b; i += 1) {
    sum += i;
    cout << i << " ";
  }

  cout << endl << "Sum: " << sum << endl;

  return 0;
}
