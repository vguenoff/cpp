#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Reads a string from the console
// Replaces any sequence of the same letters with a single corresponding letter
// Print resulting string

int main() {
  string input;
  getline(cin >> ws, input);

  istringstream isstr(input);
  ostringstream result;

  char c, prevChar = 0;
  while (isstr >> c)
    if (c != prevChar) {
      result << c;
      prevChar = c;
    }

  cout << result.str() << endl;

  return 0;
}

// aaaaabbbbbcdddeeeedssaa