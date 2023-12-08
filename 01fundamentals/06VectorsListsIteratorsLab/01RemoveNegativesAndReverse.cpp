#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Write a program that:
// Read a sequence of numbers, separated with single space
// Remove all negative numbers from given sequence
// Print the remaining elements in reversed order
// Note: In case of no elements left in the list, print "empty".

void readInts(vector<int> &numbers, istringstream &isstr) {
  int number;

  while (isstr >> number) {
    if (number > 0) {
      numbers.push_back(number);
    }
  }
}

void printInts(const vector<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl << endl;
}

vector<int> reserveInts(vector<int> &numbers) {
  vector<int> reversedNumbers;

  for (vector<int>::iterator it = numbers.end() - 1; it >= numbers.begin();
       it--) {
    reversedNumbers.push_back(*it);
  }

  return reversedNumbers;
}

int main() {
  string input;
  getline(cin >> ws, input);
  vector<int> numbers;
  istringstream isstr(input);

  readInts(numbers, isstr);

  if (numbers.size()) {
    printInts(reserveInts(numbers));
  } else {
    cout << "empty" << endl;
  }

  return 0;
}

// 10 -5 7 9 -33 50