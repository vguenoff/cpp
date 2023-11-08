#include <iostream>

using namespace std;

// Write a program that:
// · Reads an integer number N
// · Check whether a given number is strong
// o Number is strong if the sum of the Factorial of each digit is equal to the
// number. For example: 145 is a strong number, because 1! + 4! + 5! = 145 ·
// Print "yes" if the number is strong · Print "no" if the number is NOT strong

int calcFactorial(int number) {
  if (number == 0) {
    return 1;
  }

  int result = number;

  while (number > 1) {
    number -= 1;
    result *= number;
  }

  return result;
}

int main() {
  int num, factorialSum = 0;
  cin >> num;
  int originalNum = num;

  while (num > 0) {
    int lastDigit = num % 10;
    factorialSum += calcFactorial(lastDigit);

    num = num / 10;
  }

  if (originalNum == factorialSum) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}
