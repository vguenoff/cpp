#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read a line containing integer numbers, separated by space from the console
// Calculate sum of the entered numbers
// Print the calcualated sum
// In addition to the numbers, each line will contain one or more words
// Print those words on a separate line, separated by spaces, after the sum, in
// the order, they were in the input

int main() {
  string line;
  getline(cin >> ws, line);

  istringstream lineStream(line);
  ostringstream invalid;

  int sum = 0;

  string num;
  while (lineStream >> num) {
    bool isNumber = true;

    for (char c : num)
      if (!isdigit(c)) {
        // for negative numbers
        if (c == '-') {
          isNumber = true;
          continue;
        }

        isNumber = false;
      }

    if (isNumber) {
      sum += stoi(num);
    } else {
      invalid << num << ' ';
    }
  }

  cout << sum << endl;
  cout << invalid.str() << endl;

  return 0;
}

// 1 2 3 invalid 4