#include <cctype>
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

list<string>::iterator gotoListIndex(list<string> &train, int index) {
  list<string>::iterator it = train.begin();

  while (it != train.end() && index != 0) {
    it++;
    index--;
  }

  return it;
}

void doInsertAt(list<string> &train, string wagon, int index) {
  list<string>::iterator it = gotoListIndex(train, index);

  train.insert(it, wagon);
}

list<string>::iterator doRemoveAt(list<string> &train, int index) {
  list<string>::iterator it = gotoListIndex(train, index);

  if (it != train.end())
    train.erase(it);

  return it;
}

void printList(const list<string> &train) {
  for (string wagon : train) {
    cout << wagon;
  }

  cout << endl;
}

int main() {
  list<string> train = {"|"};

  string wagon;
  while (getline(cin >> ws, wagon)) {
    if (wagon == "end")
      break;

    if (wagon == "empty") {
      train.push_back(" |");
    } else {
      train.push_back(wagon + '|');
    }
  }

  string command;
  while (cin >> command) {
    if (command == "E")
      break;

    if (command == "P") {
      printList(train);
    } else if (command == "M") {
      int from, to;
      cin >> from >> to;

      doInsertAt(train, *doRemoveAt(train, from), to);

      printList(train);
    } else if (command == "L") {
      int index;
      cin >> index;

      doRemoveAt(train, index);
      printList(train);
    }
  }

  return 0;
}

// coal
// ore
// empty
// livestock
// grain
// end
