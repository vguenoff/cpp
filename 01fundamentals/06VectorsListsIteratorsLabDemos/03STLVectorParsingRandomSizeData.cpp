#include <iostream>
#include <list>
#include <sstream>
// #include <vector>

using namespace std;

int main() {
  // Reads numbers until "end" is entered, then shows
  // the maximum abs difference between any two elements
  vector<int> numbers;

  string itemString;
  cin >> itemString;

  while (itemString != "end") {
    stringstream itemParser(itemString);
    int itemValue;
    itemParser >> itemValue;

    numbers.push_back(itemValue);

    cin >> itemString;
  }

  int maxAbsDifference = 0;

  for (unsigned long a = 0; a < numbers.size(); a++) {
    for (unsigned long b = 0; b < numbers.size(); b++) {
      const int currentDiff = numbers[a] - numbers[b];
      if (currentDiff > maxAbsDifference) {
        maxAbsDifference = currentDiff;
      }
    }
  }

  cout << "max abs difference: " << maxAbsDifference << endl;

  cerr << "But how to find this messy main file?!?" << endl;

  return 0;
}
