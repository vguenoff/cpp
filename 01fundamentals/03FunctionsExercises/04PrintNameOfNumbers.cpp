#include <iostream>

using namespace std;

// Write a program that:
// Read an integer number in the range [0, 9999]
// Prints the name of that number in English

// Hints:
// Use lowercase English letters only
// Don't place "and" (957 is nine hundred fifty-seven, NOT nine hundred and
// fifty-seven)
// Skip 0 digits, except for the number 0 (0 -> zero; 101 -> one hundred one;
// 1001 -> one thousand one) Don't print dashes (print 75 as seventy five, NOT
// seventy-five)

string returnToTen(int n) {
  switch (n) {
  case 0:
    return "zero";
  case 1:
    return "one";
  case 2:
    return "two";
  case 3:
    return "three";
  case 4:
    return "four";
  case 5:
    return "five";
  case 6:
    return "six";
  case 7:
    return "seven";
  case 8:
    return "eight";
  case 9:
    return "nine";
  default:
    return "error returnToTen";
  }
}

string returnToTwenty(int n) {
  switch (n) {
  case 10:
    return "ten";
  case 11:
    return "eleven";
  case 12:
    return "twelve";
  case 13:
    return "thirteen";
  case 14:
    return "fourteen";
  case 15:
    return "fifteen";
  case 16:
    return "sixteen";
  case 17:
    return "seventeen";
  case 18:
    return "eighteen";
  case 19:
    return "nineteen";
  default:
    return "error returnToTwenty";
  }
}

string returnToHundred(int n) {
  switch (n) {
  case 2:
    return "twenty";
  case 3:
    return "thirty";
  case 4:
    return "forty";
  case 5:
    return "fifty";
  case 6:
    return "sixty";
  case 7:
    return "seventy";
  case 8:
    return "eighty";
  case 9:
    return "ninety";
  default:
    return "error returnToTen";
  }
}

void printToHundred(int n) {
  cout << returnToHundred(n / 10) << ' ';

  if (n % 10 != 0) {
    cout << returnToTen(n % 10) << endl;
  } else {
    cout << endl;
  }
}

void printToThousand(int n) {
  if (n / 100 > 0) {
    cout << returnToTen(n / 100) << " hundred ";
  }

  int r = n % 100;

  if (r != 0) {
    if (r < 10) {
      cout << returnToTen(r) << endl;
    } else if (r < 20) {
      cout << returnToTwenty(r) << endl;
    } else if (r < 100) {
      printToHundred(r);
    }
  } else {
    cout << endl;
  }
}

void printNumber(int n) {
  if (n < 10) {
    cout << returnToTen(n) << endl;
  } else if (n < 20) {
    cout << returnToTwenty(n) << endl;
  } else if (n < 100) {
    printToHundred(n);
  } else if (n < 1000) {
    printToThousand(n);
  } else if (n < 9999) {
    cout << returnToTen(n / 1000) << " thousand ";
    int r = n % 1000;

    if (r != 0) {
      printToThousand(r);
    } else {
      cout << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;

  printNumber(n);

  return 0;
}
