#include <iostream>

using namespace std;

// Write a program that:
// Read a text (string) from the console
// Create a function that receives a text
// Find the count of the vowels contained in the text
// Print the count of the vowels in the text

int countVowels(string s) {
  int count = 0;

  for (unsigned long i = 0; i < s.length(); i += 1) {
    char letter = (char)tolower(s[i]);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
        letter == 'u') {
      count += 1;
    }
  }

  return count;
}

int main() {
  string input;
  cin >> input;

  cout << countVowels(input) << endl;

  return 0;
}
