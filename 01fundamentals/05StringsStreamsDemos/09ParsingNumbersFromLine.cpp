#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  cout << "Enter space separated numbers." << endl;
  string line;
  getline(cin, line);

  istringstream lineStream(line);

  int numbers[100] = {};
  int count = 0;

  int currentNumber;
  while (lineStream >> currentNumber) {
    numbers[count++] = currentNumber;
  }

  for (int i = 0; i < count; i += 1) {
    cout << numbers[i] << endl;
  }

  return 0;
}
