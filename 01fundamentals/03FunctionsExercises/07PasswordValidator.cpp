#include <iostream>

using namespace std;

// Write a program that checks if a given password is valid.
// The password validation rules are:
// It should contain 6 – 10 characters (inclusive)
// It should contain only letters and digits
// It should contain at least 2 digits
// If it is not valid, for any unfulfilled rule print the corresponding message:
// "Password must be between 6 and 10 characters"
// "Password must consist only of letters and digits"
// "Password must have at least 2 digits"

int getLength(string str) { return (int)str.length(); }

bool onlyLettersAndDigits(string str) {
  for (unsigned long int i = 0; i < str.length(); i += 1) {
    char c = str[i];

    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || isdigit(c))) {
      return false;
    }
  }

  return true;
}

int getDigitLength(string str) {
  int digitLength = 0;

  for (unsigned long int i = 0; i < str.length(); i += 1)
    if (isdigit(str[i]))
      digitLength += 1;

  return digitLength;
}

int main() {
  string password;
  cin >> password;

  if (getLength(password) >= 6 && getLength(password) <= 10 &&
      onlyLettersAndDigits(password) && getDigitLength(password) >= 2) {

    cout << "Password is valid" << endl;
  } else {
    if (getLength(password) < 6 || getLength(password) > 10)
      cout << "Password must be between 6 and 10 characters" << endl;

    if (!onlyLettersAndDigits(password))
      cout << "Password must consist only of letters and digits" << endl;

    if (getDigitLength(password) < 2)
      cout << "Password must have at least 2 digits" << endl;
  }

  return 0;
}
