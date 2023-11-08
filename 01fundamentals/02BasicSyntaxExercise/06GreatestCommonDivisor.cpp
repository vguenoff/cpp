#include <iostream>

using namespace std;

// Write a program that calculates the greatest common divisor (GCD) of given
// two numbers · Read two integer numbers on a single line from the console,
// separated by a single space · Find their GCD (Greatest Common Divisor) ·
// Print their GCD (Greatest Common Divisor) Hint: you can use the Euclidean
// algorithm.

// bool isPrime(int num) {
//   if (num == 2) {
//     return true;
//   } else if (num < 2 || num % 2 == 0) {
//     return false;
//   }

//   for (int i = num - 1; i > 1; i--) {
//     if (num % i == 0) {
//       return false;
//     }
//   }

//   return true;
// }

// int main() {
//   int a, b;
//   cin >> a >> b;

//   if (a == b) {
//     cout << a << endl;

//     return 0;
//   }

//   if (isPrime(a) && isPrime(b)) {
//     cout << 1 << endl;

//     return 0;
//   }

//   int reminder;
//   while ((a % b) > 0) {
//     reminder = a % b;
//     a = b;
//     b = reminder;
//   }

//   cout << reminder << endl;
//   return 0;
// }

int main() {
  int a, b;
  cin >> a >> b;

  // the smaller number of the two is the final
  int finalNumber = a > b ? b : a;

  int gcd = 0;
  for (int i = 1; i <= finalNumber; i += 1) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  cout << gcd << endl;

  return 0;
}
