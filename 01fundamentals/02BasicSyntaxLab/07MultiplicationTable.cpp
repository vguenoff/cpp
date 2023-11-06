#include <iostream>

using namespace std;

// You will receive an integer as input from the console. Print the 10 times
// table for this integer. See the examples below for more information.
// Output
// Print every row of the table in the following format:
// {theInteger} X {times} = {product}
// Constraints
// · The integer will be in the interval [1…100]

int main() {
  int num;
  cin >> num;

  for (int i = 1; i <= 10; i += 1) {
    cout << num << " X " << i << " = " << num * i << endl;
  }

  return 0;
}
