#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read a string (first) from the first line of the console
// Read another string (second) from the second line of the console
// Remove all of the occurrences of the first string in the second string until
// there is no match
// Print the remaining string

int main() {
  string input, sub;

  getline(cin >> ws, sub);
  getline(cin >> ws, input);

  while (true) {
    size_t pos = input.find(sub);
    if (pos == string::npos) { // not found
      break;
    }

    input.erase(pos, sub.size());
  }

  cout << input << endl;

  return 0;
}

// ice
// kicegiciceeb
