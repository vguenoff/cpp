#include <iostream>

using namespace std;

int main() {
  int arrInt[5];
  char arrChar[10];
  char arrOneToFive[5] = {
      'a', 'b', 'c',
      'd'}; // if the fifth element is missing there will be empty char ''

  cout << "sizeof array ints: " << sizeof(arrInt)
       << endl; // 20 bytes = 4 bytes x 5 ints
  cout << "sizeof array chars: " << sizeof(arrChar)
       << endl; // // 20 bytes = 1 bytes x 10 chars
  cout << arrOneToFive[4] << endl;

  return 0;
}
