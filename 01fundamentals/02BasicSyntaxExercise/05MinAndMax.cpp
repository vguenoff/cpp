#include <climits>
#include <iostream>

using namespace std;

// Write a program that:
// · Reads an integer number N
// · Then reads a line of N integers
// · Print the minimum and maximum of those integers, separated by single space

int main() {
  int n, max = INT_MIN, min = INT_MAX;
  cin >> n;

  for (int i = 0; i < n; i += 1) {
    int num;
    cin >> num;

    if (num > max)
      max = num;
    if (num < min)
      min = num;
  }

  cout << min << ' ' << max << endl;

  return 0;
}
