#include <cmath>
#include <iostream>

using namespace std;

// Write a program that:
// Read two integer numbers from the first line of the console separated by
// single space Read symbol (one of the following: +, -, *, /) from the second
// line of the console The operations are as follows:
// + is addition
//  - is subtraction
//  * is multiplication
// / is division
// Create four functions (for each operation) and call the right one depending
// on the command Print result from the calculation

void addition(int a, int b) {
  int result = a + b;
  cout << result << endl;
}

void subtraction(int a, int b) {
  int result = a - b;
  cout << result << endl;
}

void multiplication(int a, int b) {
  int result = a * b;
  cout << result << endl;
}

void division(int a, int b) {
  double result = a / b;
  cout << result << endl;
}

int main() {
  int a, b;
  cin >> a >> b;
  char operation;
  cin >> operation;

  switch (operation) {
  case '+':
    addition(a, b);
    break;
  case '-':
    subtraction(a, b);
    break;
  case '*':
    multiplication(a, b);
    break;
  case '/':
    division(a, b);
    break;
  }

  return 0;
}
