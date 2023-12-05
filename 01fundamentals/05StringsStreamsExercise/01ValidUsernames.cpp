#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read usernames on a single line (joined by ", ")
// Prints all valid usernames
// A valid username is:
// Has a length of between 3 and 16 characters (inclusively)
// It contains only letters, numbers, hyphens (-) and underscores (_)

bool isValid(string str) {
  if (str.length() < 3 || str.length() > 16)
    return false;

  for (char c : str)
    if (!(isalpha(c) || isdigit(c) || c == '-' || c == '_'))
      return false;

  return true;
}

int main() {
  const string devider = ", ";

  string input;
  getline(cin >> ws, input);

  ostringstream result;

  for (;;) {
    size_t pos = input.find(devider);
    string sub = input.substr(0, pos);

    if (isValid(sub)) {
      result << sub << endl;
    }

    input.erase(0, pos + devider.length());

    if (pos == string::npos) { // not found
      break;
    }
  }

  cout << result.str() << endl;

  return 0;
}

// sh, too_long_username, !lleg@l ch@rs, jeffbutt
// jeffbutt