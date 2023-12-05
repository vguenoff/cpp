#include <iostream>

using namespace std;

// Write a program that:
// Reads a line from the console containing a mathematical expression
// Check whether the brackets in the expression () are placed correctly
// Print "correct", if the brackets are placed correctly
// Print "incorrect", if the brackets are placed incorrectly
// Note: Assume everything else is correct, you don't need to check for correct
// signs, correct variables / numbers.

int main() {
  string input;
  getline(cin >> ws, input);

  int openBracketCount = 0, closeBracketCount = 0;

  for (char c : input) {
    switch (c) {
    case '(':
      openBracketCount += 1;
      break;
    case ')':
      closeBracketCount += 1;
      break;
    }
  }

  if (openBracketCount == closeBracketCount) {
    cout << "correct" << endl;
  } else {
    cout << "incorrect" << endl;
  }

  return 0;
}

// ((a+b)/5-d)