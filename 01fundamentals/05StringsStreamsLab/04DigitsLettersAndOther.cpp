#include <cctype>
#include <iostream>

using namespace std;

// Write a program that:
// Read a string from the first line of the console
// Prints:
// On the first line: all the digits
// On the second line: all the letters
// On the third line: all the other characters
// Note: There will always be at least one digit, one letter and another
// character.

int main() {
  string input;
  getline(cin >> ws, input);

  string numbers, letters, others;

  for (char c : input) {
    if (isdigit(c)) {
      numbers += c;
    } else if (isalpha(c)) {
      letters += c;
    } else {
      others += c;
    }
  }

  cout << numbers << endl << letters << endl << others << endl;

  return 0;
}

// Agd#53Dfg^&4F53
