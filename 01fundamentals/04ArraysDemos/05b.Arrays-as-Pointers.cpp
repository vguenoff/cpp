#include <iostream>

using namespace std;

// Pointer - a variable that holds the address of another variable in the memory
// The address stores its value
// Pointers have data type
// Arrays can be represented as pointers
// The array is a sequence of variables stored in memory
// The array name points to the first item

int main() {
  int arr[4] = {1, 2, 3, 4};
  int *ptr = arr;

  // the same address in memory
  // getting the address in memory with &

  cout << ptr << " | ptr is equivalent to &arr[0] | " << &arr[0] << endl;
  cout << (ptr + 1) << " | (ptr + 1) is equivalent to &arr[1] | " << &arr[1]
       << endl;
  cout << (ptr + 2) << " | (ptr + 2) is equivalent to &arr[2] | " << &arr[2]
       << endl;
  cout << (ptr + 3) << " | (ptr + 3) is equivalent to &arr[3] | " << &arr[3]
       << endl;

  cout << (*(ptr) == arr[0]) << " *ptr is equal to arr[0] = " << *ptr << endl;
  cout << (*(ptr + 1) == arr[1])
       << " *(ptr + 1) is equal to arr[1] = " << *(ptr + 1) << endl;
  cout << "ptr[1] is equal to arr[1] | " << (ptr[1] == arr[1])
       << endl; // this is true

  return 0;
}
