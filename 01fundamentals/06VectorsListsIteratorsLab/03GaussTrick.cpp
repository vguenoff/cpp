#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Write a program that:
// Read a sequence of numbers, separated with single space
// Sum all numbers in a list in the following order:
// first + last, first + 1 + last - 1, first + 2 + last - 2, … first + n, last –
// n Print resulting sequence

void readInts(vector<int> &numbers, istringstream &isstr) {
  int number;

  while (isstr >> number) {
    numbers.push_back(number);
  }
}

void printInts(const vector<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl << endl;
}

vector<int> sumInts(vector<int> &numbers) {
  vector<int> sumedInts;

  size_t size = numbers.size();

  for (size_t i = 0; i < size / 2; i += 1) {
    sumedInts.push_back(numbers[i] + numbers[size - 1 - i]);
  }

  if (size % 2 != 0)
    sumedInts.push_back(numbers[size / 2]);

  return sumedInts;
}

int main() {
  string input;
  getline(cin >> ws, input);
  vector<int> numbers;
  istringstream isstr(input);

  readInts(numbers, isstr);
  printInts(sumInts(numbers));

  return 0;
}

// 1 2 3 4 5