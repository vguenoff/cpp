#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read an space-separated number of strings from the console
// Each string has to be repeated N times in the output, where N is the length
// of the string
// Print the resulting string
// Note: Do not use separator or new line between the strings.

int main() {
  string input;
  getline(cin >> ws, input);

  istringstream istrs(input);
  ostringstream result;

  string str;
  for (;;) {
    istrs >> str;
    if (!istrs)
      break;

    size_t count = str.length();
    while (count--) {
      result << str;
    }
  }

  cout << result.str() << endl;

  return 0;
}
