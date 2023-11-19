#include <cmath>
#include <iostream>

using namespace std;

int defaultIninitialized[2];

int main() {
  const int ARR_LENGTH = 3; // error if it's not const

  static int defaultInitializedLocal[2]; //

  int uninitialized[4];

  int numbers[ARR_LENGTH] = {
      13,
      42,
      69,
  }; // NOTE: having a comma after the last element is acceptable

  char abc[] = {'a', 'a' + 1, 99, 100, 101}; // error if we put number > 255

  float emptyArray[] = {};

  double arrayWithDefaults[ARR_LENGTH] = {3.14};
  cout << arrayWithDefaults[2] << endl; // 0

  int initList[] = {13, 42, 69};

  char xyz[4] = "xyz"; // ! defining a string
  // should be length + 1 because the string is terminating with \0
  // or we can leave it [] without specifying
  cout << xyz << endl;

  // int length;
  // cin >> length;

  // int arrWithDynamicLength[length];
  // cout << arrWithDynamicLength[0] << endl;  // ?? 2
  // cout << arrWithDynamicLength[33] << endl; // ?? 1074339512

  return 0;
}
