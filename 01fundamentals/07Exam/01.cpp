#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Write a program that:
// Read integer number N, which is the number of space-separated characters that
// will follow

// Count the vowels letters from the input and the non-vowels letters from the
// input
// Print the number of vowels, followed by a space and the number of non-vowels
// Hints:
// Vowels are the letters a, e, i, o, u and y
// Be careful of the capitalization, as you may get capital letters

// You may get characters, which are not letters (for example:(, +, -, @, $)

void readInputStringOutputVectorChar(vector<char> &output) {
  string input;
  getline(cin >> ws, input);

  istringstream readStream(input);

  char bufferChar;
  while (readStream >> bufferChar)
    output.push_back(bufferChar);
}

int main() {
  size_t numOfChars, numVowels = 0, numOther = 0;
  cin >> numOfChars;

  vector<char> charList;

  charList.reserve(numOfChars);

  readInputStringOutputVectorChar(charList);

  for (vector<char>::iterator it = charList.begin(); it != charList.end();
       it++) {
    char letter = (char)tolower(*it);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
        letter == 'u' || letter == 'y') {
      numVowels += 1;
    } else if ((int(*it) >= 65 && int(*it) <= 90) ||
               (int(*it) >= 97 && int(*it) <= 122)) {
      numOther += 1;
    }
  }

  cout << numVowels << ' ' << numOther << endl;

  return 0;
}

// 17
// n E s g p a # f y e b s i r t u s
