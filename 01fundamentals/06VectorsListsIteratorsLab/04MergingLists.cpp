#include <cctype>
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

// Write a program that:
// Read two sequences with numbers from the first two lines of the console
// Create a result sequence that contains the numbers from both of the lists
// The first element should be from the first list, the second from the second
// list and so on Print the resulting merged sequence Note: If the length of the
// two lists is not equal, just add the remaining elements at the end of the
// list.

void readInts(list<int> &numbers, istringstream &isstr) {
  int number;

  while (isstr >> number) {
    numbers.push_back(number);
  }
}

void printInts(const list<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl << endl;
}

list<int> combineSequence(const list<int> &first, const list<int> &second) {
  list<int> result;
  list<int>::const_iterator it1 = first.cbegin(), it2 = second.cbegin();

  // while both lists still have values
  for (; it1 != first.cend() && it2 != second.cend(); it1++, it2++) {
    result.push_back(*it1);
    result.push_back(*it2);
  }

  // remaining in first
  for (; it1 != first.cend(); it1++)
    result.push_back(*it1);

  // remaining in second
  for (; it2 != second.cend(); it2++)
    result.push_back(*it2);

  return result;
}

int main() {
  string first, second;
  getline(cin >> ws, first);
  getline(cin >> ws, second);

  list<int> firstNumbers, secondNumbers;
  istringstream firstStream(first), secondStream(second);

  readInts(firstNumbers, firstStream);
  readInts(secondNumbers, secondStream);
  printInts(combineSequence(firstNumbers, secondNumbers));

  return 0;
}

// 3 5 2 43 12 3 54 10 23
// 76 5 34 2 4 12
