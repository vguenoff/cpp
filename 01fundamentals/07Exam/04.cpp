#include <cctype>
#include <iostream>
#include <list>
#include <vector>
#include <sstream>

using namespace std;

void incrValue(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    arr[i]++;
  }
}
int sum(double a, double b)
{
  return a + b;
}

int main()
{
  cout << sum(3.14, 1.50) << endl;
}

// coal
// ore
// empty
// livestock
// grain
// end