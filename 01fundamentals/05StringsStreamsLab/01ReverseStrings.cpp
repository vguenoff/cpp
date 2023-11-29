#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Read a series of words until you receive a word "end"
// Reverse each given word
// Prints each reversed word in the format:
//  "{word} = {reversed word}"

void reverseWord(const string &str, ostringstream &ostrstr) {
  size_t c = str.length() - 1;

  for (;;) {
    ostrstr << str[c];

    if (c)
      c--;
    else
      break;
  }
}

int main() {
  ostringstream result;

  while (true) {
    string word;
    cin >> word;

    if (word == "end")
      break;

    result << word << " = ";
    reverseWord(word, result);
    result << endl;
  }

  cout << result.str() << endl;

  return 0;
}
