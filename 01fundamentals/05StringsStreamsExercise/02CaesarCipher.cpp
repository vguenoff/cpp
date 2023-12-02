#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read a text from the first line of the console
// Encrypt the text by shifting each character with three positions forward.
// Example:
// A would be replaced by D
// B would become E
// P would become S
// Print the encrypted text

int main() {
  string input;
  getline(cin >> ws, input);
  ostringstream result;

  for (char c : input)
    result << char(c + 3);

  cout << result.str() << endl;

  return 0;
}

// Programming is cool!
// Surjudpplqj#lv#frro$