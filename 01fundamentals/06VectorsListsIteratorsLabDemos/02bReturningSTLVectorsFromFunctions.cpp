#include <cmath>
#include <iostream>
// #include <vector>

using namespace std;

vector<double> getSquareRoots(int from, int to) {
  vector<double> roots;

  for (int i = from; i <= to; i++) {
    roots.push_back(sqrt(i));
  }

  return roots;
}

// pass by reference is recommended unless we need to copy it
// void print(vector<double> numbers) {
// const/ref as a protecting pattern
void print(const vector<double> &numbers) {
  for (double number : numbers) {
    cout << number << " ";
  }

  cout << endl;
}

int main() {
  print(getSquareRoots(4, 25));

  cerr << "Why is the output incorrect?" << endl;

  return 0;
}
