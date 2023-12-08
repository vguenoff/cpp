#include <cctype>
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

// Write a program that:
// Read a list of integers from the first line of the console
// Then until you receive "end", you will be given different commands:
// Add {number} – add a number to the end of the list
// Remove {number} – remove a number from the list
// RemoveAt {index} – remove a number at a given index
// Insert {number} {index} – insert a number at a given index
// Note: All the indices will be valid!
// When you receive the "end" command, print the final state of the list
// (separated by spaces).

void readSequence(list<int> &numbers) {
  string input;
  getline(cin >> ws, input);

  istringstream stream(input);

  int number;
  while (stream >> number) {
    numbers.push_back(number);
  }
}

void printList(const list<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl;
}

void doAdd(list<int> &theList, int number) { theList.push_back(number); }

void doRemove(list<int> &theList, int number) {
  for (list<int>::iterator it = theList.begin(); it != theList.end(); it++) {
    if (*it == number) {
      theList.erase(it);
      return;
    }
  }
}

list<int>::iterator gotoListIndex(list<int> &theList, int index) {
  list<int>::iterator it = theList.begin();

  while (it != theList.end() && index != 0) {
    it++;
    index--;
  }

  return it;
}

void doRemoveAt(list<int> &theList, int index) {
  list<int>::iterator it = gotoListIndex(theList, index);

  // if the idnex is not to large remove the element at the index
  if (it != theList.end())
    theList.erase(it);
}

void doInsertAt(list<int> &theList, int number, int index) {
  list<int>::iterator it = gotoListIndex(theList, index);

  theList.insert(it, number);
}

int main() {
  list<int> theList;
  readSequence(theList);

  string command;
  while (cin >> command) {
    if (command == "end")
      break;

    int number;
    cin >> number;

    if (command == "Add")
      doAdd(theList, number);
    else if (command == "Remove")
      doRemove(theList, number);
    else if (command == "RemoveAt")
      doRemoveAt(theList, number);
    else if (command == "Insert") {
      int index;
      cin >> index;
      doInsertAt(theList, number, index);
    }
  }

  printList(theList);

  return 0;
}

// 3 5 2 43 12 3 54 10 23
// 76 5 34 2 4 12
