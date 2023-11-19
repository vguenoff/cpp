#include <iostream>

using namespace std;

int main() {
  int numbers[] = {13, 42, 69};

  // copy
  cout << "Pass by copy:" << endl;
  for (int number : numbers) {
    cout << number << ' ';
    number += 1;
  }
  cout << endl;
  for (int number : numbers) {
    cout << number << ' ';
  }

  // reference
  cout << endl << "Pass by reference:" << endl;
  for (int &number : numbers) {
    cout << number << ' ';
    number += 1;
  }

  cout << endl;
  for (int number : numbers) {
    cout << number << ' ';
  }
  cout << endl;
  cout << "asd" << endl;

  return 0;
}
