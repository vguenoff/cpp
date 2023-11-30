#include <algorithm>
#include <iostream>
// #include <vector>

using namespace std;

void print(const vector<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl << endl;
}

void findAndPrintElement(const vector<int> &numbers, int element) {
  cout << "Element: " << element << ' ';

  vector<int>::const_iterator it =
      find(numbers.begin(), numbers.end(), element);

  if (it == numbers.end()) {
    cout << "not found" << endl;
  } else {
    cout << "found at index: " << it - numbers.begin() << endl;
  }
}

int main() {
  vector<int> numbers{1, -4, 13, 8};
  findAndPrintElement(numbers, 7);
  findAndPrintElement(numbers, 8);

  sort(numbers.begin(), numbers.end());
  findAndPrintElement(numbers, 8);
  print(numbers);

  sort(numbers.begin(), numbers.end(), less<int>());
  findAndPrintElement(numbers, 8);
  print(numbers);

  sort(numbers.begin(), numbers.end(), greater<int>());
  findAndPrintElement(numbers, 8);
  print(numbers);

  return 0;
}
