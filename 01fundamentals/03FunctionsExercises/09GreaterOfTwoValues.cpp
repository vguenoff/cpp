#include <iostream>

using namespace std;

// Write a program that:
// Reads a type (string) and two values of this type from the console
// Entered type can be one of the following values: "int", "char" or "string"
// Create functions which can compare int, char or string
// Return the biggest of the two values

int compareInt(int a, int b) { return a > b ? a : b; }

char compareChar(char a, char b) { return a > b ? a : b; }

string compareString(string a, string b) { return a > b ? a : b; }

int main() {
  string type;
  cin >> type;

  if (type == "int") {
    int a, b;
    cin >> a >> b;

    cout << compareInt(a, b) << endl;
  } else if (type == "char") {
    char a, b;
    cin >> a >> b;

    cout << compareChar(a, b) << endl;

  } else if (type == "string") {
    string a, b;
    getline(cin >> ws, a);
    getline(cin >> ws, b);

    cout << compareString(a, b) << endl;
  }

  return 0;
}
