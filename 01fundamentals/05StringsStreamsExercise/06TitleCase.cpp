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

  for (size_t c = 0; c < input.length(); c += 1)
    if (!isalpha(input[c - 1])) {
      result << (char)toupper(input[c]);
    } else {
      result << input[c];
    }

  cout << result.str() << endl;

  return 0;
}

// On the south Carpathian mountains,a tree is swinging