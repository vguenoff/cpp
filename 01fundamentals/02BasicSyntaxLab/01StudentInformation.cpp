#include <iostream>

using namespace std;

// You will be given 3 lines of input – student name (string), age (integer
// number), and average grade (floating-point number). Your task is to print all
// the info about the student in the following format, where grade is formatted
// with 2 digits:

// "Name: {student name}, Age: {student age}, Grade: {student grade}".

int main() {
  string studentName;
  int studentAge;
  double studentGrade;

  cin >> studentName >> studentAge >> studentGrade;

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << "Name: " << studentName << ", Age: " << studentAge
       << ", Grade: " << studentGrade << endl;

  return 0;
}
