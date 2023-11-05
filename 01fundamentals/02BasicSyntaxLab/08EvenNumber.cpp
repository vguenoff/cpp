#include <iostream>

using namespace std;

// Take as an input an even number and print its absolute value with a message:
// "The number is: {absoluteValue}". If the number is odd, print "Please write
// an even number." and continue reading numbers.

int main() {
  int number;

  while (true) {
    cin >> number;

    if (number % 2 == 0) {
      if (number < 0) {
        number *= -1;
      }

      // cout << "The number is: " << abs(number) << endl;
      cout << "The number is: " << number << endl;

      break;
    } else {
      cout << "Please write an even number." << endl;
    }
  }

  return 0;
}
