#include <iostream>

using namespace std;

// Write a program that:
// Reads an integer number from the console
// If the number is in range [1; 7] you have to print:
// Monday if the number is 1
// Tuesday if the number is 2
// Wednesday if the number is 3
// Thursday if the number is 4
// Friday if the number is 5
// Saturday if the number is 6
// Sunday if the number is 7
// If the number is out of the given range above print: "Invalid Day!"

const string DAY_OF_THE_WEEK[7] = {
    "Monday", "Tuesday",  "Wednesday", "Thursday",
    "Friday", "Saturday", "Sunday",
};

int main() {
  int n;
  cin >> n;

  if (n > 0 && n <= 7) {
    cout << DAY_OF_THE_WEEK[n - 1];
  } else {
    cout << "Invalid day!";
  }

  cout << endl;

  return 0;
}
