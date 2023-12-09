#include <iostream>
#include <vector>

using namespace std;

// Write a program that reads a single line from the console, containing
// brackets for a mathematical expression (only the brackets will appear in the
// input), and determine whether the brackets in the expression are correct.
// There are 3 types of brackets – {}, [] and (). {} can contain {}, [] and ()
// brackets. Square brackets [] can contain [] and () brackets. Curved ()
// brackets can contain only () brackets. Said simply, each type of brackets can
// contain the same type of brackets inside, or a "lower" type of brackets (()
// is lower than [] which is lower than {}). If a bracket of one type is opened,
// it needs to be closed before a bracket of another type is closed. Print valid
// if the brackets in the expression are valid and invalid if they are not.

bool isValidBrackets(vector<char> &input) {
  size_t br0count = 0; // ()
  size_t br1count = 0; // []
  size_t br2count = 0; // {}

  for (vector<char>::iterator it = input.begin(); it != input.end(); it++) {
    switch (*it) {
    case '{':
      if (br0count || br1count)
        return false; // '{' cannot exist in [] and ()
      br2count++;
      break;
    case '}':
      if (br0count || br1count || br2count == 0)
        return false;
      br2count--;
      break;
    case '[':
      if (br0count)
        return false; // '[' cannot exist in ()
      br1count++;
      break;
    case ']':
      if (br0count || br1count == 0)
        return false;
      br1count--;
      break;
    case '(':
      br0count++;
      break;
    case ')':
      if (br0count == 0)
        return false;
      br0count--;
      break;
    }
  }

  return br0count == 0 && br1count == 0 && br2count == 0;
}

int main() {
  string stringBuffer;
  getline(cin >> ws, stringBuffer);

  vector<char> input;
  input.reserve(stringBuffer.size());

  for (char c : stringBuffer)
    input.push_back(c);

  cout << (isValidBrackets(input) ? "valid" : "invalid") << endl;

  return 0;
}

// [()]{}{[()()]()}