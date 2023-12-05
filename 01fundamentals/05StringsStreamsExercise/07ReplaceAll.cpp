#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read a text from the first line of the console
// Read a "find" string from the second line of the console
// Read a "replace" string from the third line of the console
// Any part of the text which matches the "find" string should be replaced with
// the "replace" string Print the resulting text on the console

string findAndReplace(string input, const string &findWord,
                      const string &replaceWord) {
  size_t pos = 0;
  while (true) {
    pos = input.find(findWord, pos);
    if (pos == string::npos)
      break;

    input.replace(pos, findWord.length(), replaceWord);
  }

  return input;
}

int main() {
  string input, findWord, replaceWord;
  getline(cin >> ws, input);
  cin >> findWord >> replaceWord;

  cout << findAndReplace(input, findWord, replaceWord) << endl;

  return 0;
}

// This is a test string. Such a funny string!
// string
// life