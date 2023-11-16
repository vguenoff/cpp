#include <iostream>

using namespace std;

// Write a program that:
// Reads a string on the first line from the console, representing a product -
// "coffee",  "water", "coke" or "snacks"
// Reads an integer on the second line from the console, representing the
// quantity of the product Create a function that calculates and prints the
// total price of an order The function should receive two parameters: product
// and quantity
// The prices for a single item of each product are: coffee – 1.50
// water – 1.00 coke – 1.40 snacks – 2.00
// Print the result, formatted to the second digit

int main() {
  const double COFFEE_PRICE = 1.50, WATER_PRICE = 1.00, COKE_PRICE = 1.40,
               SNACKS_PRICE = 2.00;
  string product;
  int quantity;
  cin >> product >> quantity;

  cout.setf(ios::fixed);
  cout.precision(2);

  double result = 0;

  if (product == "coffee")
    result = COFFEE_PRICE * quantity;
  else if (product == "water")
    result = WATER_PRICE * quantity;
  else if (product == "coke")
    result = COKE_PRICE * quantity;
  else if (product == "snacks")
    result = SNACKS_PRICE * quantity;

  cout << result << endl;

  return 0;
}
