#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

// Write a program that:
// Reads two strings from the console, separated by single space
// Calculate the sum of strings character codes multiplied (multiply one[0]
// with two[0] and add to the total sum) and  continue with the next two
// characters
// Print the calculated sum
// Note: If one of the strings is longer than the other, add the remaining
// character codes to the total sum without multiplication.

int main() {
  string one, two;
  cin >> one >> two;

  int sum = 0;
  size_t length = one.length() > two.length() ? one.length() : two.length();

  for (size_t i = 0; i < length; i += 1) {
    int oneIndex, twoIndex;

    oneIndex = i < one.length() ? one[i] : 1;
    twoIndex = i < two.length() ? two[i] : 1;

    sum += oneIndex * twoIndex;
  }

  cout << sum << endl;

  return 0;
}

// George Peter