#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main() {

  vector<int> numbers{42, 13, 69};
  // Example: Change each element in the vector by dividing it by 2
  for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++) {
    *i /= 2;
  }

  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl << endl;

  vector<string> words{"the", "quick", "purple", "fox"};

  // Example: print each string element and its length
  for (vector<string>::iterator it = words.begin(); it != words.end(); it++) {
    cout << *it << ": " << it->size() << endl;
    // NOTE: the same can be done with this code:
    // cout << *i << ": " << (*i).size() << endl;
  }

  return 0;
}
