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
  ostringstream result;

  for (size_t i = 0; i < input.length(); i += 1)
    if (input[i] != input[i - 1])
      result << input[i];

  cout << result.str() << endl;

  return 0;
}

// aaaaabbbbbcdddeeeedssaa