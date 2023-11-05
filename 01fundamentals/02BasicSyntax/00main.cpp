#include <iostream>

using namespace std;

// Global vars
int global = 5;

// Constants
// const int secondsInMinute = 60;

int main() {
  // Variable modifiers
  // static int days = 3;
  // init once and exist through program

  // extern int laterVar;
  // tells the compiler a variable exists somewhere
  // more in advanced

  // cout << sizeof(int) * 8 << endl;
  // int 'usually' means signed long int
  // 4 bytes (32 bits) -> 2^32 unsigned max

  // Local
  // int a = 5;
  // cin >> a;

  // char
  // char c = 'a';
  // char sameLetter = 97;
  // char sameLetterAgain = 'b' - 1;

  // cout << c << sameLetter << sameLetterAgain << endl;
  // cout << "hello world " << a << endl;

  // bool 1 byte
  // bool initWithKeyword = true;
  // bool initWithKeywordCtor(true);
  // bool initWithZero = 0;
  // bool initWithNegativeNumber(-13);

  // cout
  //     << initWithKeyword
  //     << initWithKeywordCtor
  //     << initWithZero
  //     << initWithNegativeNumber
  //     << endl; // 1101

  // implicit casting (automatic)
  // explicit casting (non automatic)
  // char a = 'a';
  // int i = a; // valid
  // cout << i << endl; // 97
  unsigned char c = 'C';

  // type cast
  cout << (short)c << endl; // 67
  cout << short(c) << endl; // 67

  return 0;
}
