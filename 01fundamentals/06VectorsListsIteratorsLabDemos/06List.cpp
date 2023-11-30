#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> numbers{1, 3, 5};

  // points to AFTER 5
  list<int>::iterator lastItemIter = numbers.end();
  lastItemIter--; // points to 5 now
  numbers.insert(lastItemIter, 4);

  // adds to the end - same as numbers.insert(numbers.end(), 6);
  numbers.push_back(6);

  list<int>::iterator secondItemIter = numbers.begin(); // points to 1
  secondItemIter++;                                     // points to 3 now
  numbers.insert(secondItemIter, 2);

  // inserts at start - same as numbers.insert(numbers.begin(), 0);
  numbers.insert(numbers.begin(), 0);

  // prints 0 1 2 3 4 5 6
  for (int number : numbers) {
    cout << number << " ";
  }

  // By the way, if you replace list with vector at the start,
  // the printed result will be EXACTLY the same,
  // except that you need to use insert instead of push_front
  // (but operations will be slower, because vector insert is O(N), not O(1)).
  // That's the point of iterators and data structures -
  // they abstract-away the implementation details

  return 0;
}
