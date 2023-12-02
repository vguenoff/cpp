#include <iostream>
// #include <vector>

using namespace std;

void print(vector<int> numbers) {
  for (size_t i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }

  cout << endl;
}

void printMultiplied(vector<int> numbers, int multiplier) {
  for (size_t i = 0; i < numbers.size(); i++) {
    numbers[i] *= multiplier;
  }

  print(numbers);
  numbers.clear(); // clearing the copy after print
}

int main() {
  vector<int> numbers{1, 2, 3};

  printMultiplied(numbers, 10); /// 10, 20, 30
  print(numbers);               /// 1, 2, 3

  return 0;
}
