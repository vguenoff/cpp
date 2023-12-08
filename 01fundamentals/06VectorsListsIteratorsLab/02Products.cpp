// #include <algorithm>
// #include <cctype>
#include <iostream>
// #include <sstream>
// #include <vector>
#include <list>

using namespace std;

// void printproducts(const vector<string> &products) {
//   for (size_t i = 0; i < products.size(); i += 1) {
//     cout << i + 1 << "." << products[i] << endl;
//   }
// }

// Write a program that:
// Read an integer number N (count of the products) from the first line of the
// console Read N lines of products (string) Print a numbered list of all the
// products ordered by name

int main() {
  int count;
  cin >> count;

  // vector<string> products;
  list<string> products;

  for (int i = 0; i < count; i += 1) {
    string word;
    getline(cin >> ws, word);
    products.push_back(word);
  }

  products.sort();

  int index = 1;
  for (list<string>::iterator it = products.begin(); it != products.end();
       it++, index++) {
    cout << index << "." << *it << endl;
  }

  // sort(products.begin(), products.end());

  // printproducts(products);

  return 0;
}

// 4
// Potatoes
// Tomatoes
// Onions
// Apples