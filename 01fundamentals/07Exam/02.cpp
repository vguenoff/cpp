#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void readInputStringOutputVectorString(vector<string> &output) {
  string input;
  getline(cin >> ws, input);

  istringstream readStream(input);

  string bufferString;
  while (readStream >> bufferString)
    output.push_back(bufferString);
}

int operate(string symbol, int previousValue, int currentValue) {
  if (symbol == "+")
    return previousValue + currentValue;
  if (symbol == "-")
    return previousValue - currentValue;
  if (symbol == "*")
    return previousValue * currentValue;
  if (symbol == "/")
    return previousValue / currentValue;

  if (previousValue == 0)
    return currentValue;

  return 0;
}

int main() {
  int currentValue = 0, previousValue = 0;

  vector<string> operations;

  readInputStringOutputVectorString(operations);

  for (vector<string>::iterator it = operations.begin(); it != operations.end();
       it++) {
    if (*it == "+" || *it == "-" || *it == "*" || *it == "/") {
    } else {
      currentValue = stoi(*it);
      previousValue = stoi(*(it - 1));
    }
  }

  cout << currentValue << ' ' << previousValue << endl;

  return 0;
}

// 5 3 + 10 * 2 -
// 78 2

// 3 4 5 12
