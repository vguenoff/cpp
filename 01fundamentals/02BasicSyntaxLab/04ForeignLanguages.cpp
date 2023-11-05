#include <iostream>

using namespace std;

// Write a program that prints the language that a given country speaks. You can
// receive only the following combinations: · English is spoken in England and
// USA · Spanish is spoken in Spain, Argentina and Mexico · For the others we
// should print "unknown"
// Input You will receive a single country name on a
// single line.
// Output Print the language, which the country speaks, or if it is
// unknown for your program, print "unknown".

int main() {
  string country;
  cin >> country;

  if (country == "England" || country == "USA") {
    cout << "English" << endl;
  } else if (country == "Spain" || country == "Argentina" ||
             country == "Mexico") {
    cout << "Spanish" << endl;
  } else {
    cout << "unknown" << endl;
  }

  return 0;
}
