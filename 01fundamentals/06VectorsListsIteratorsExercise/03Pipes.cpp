#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// The company "Water You Waiting For" provides hot water to houses in a village
// through a series of underground pipes, each house having its pipe for hot
// water. But the pipes corrode over periods of years and need to be replaced.
// Since the company wants to save money, it only does checkups of the pipes
// once a year, always on the same date (April 1st). Pipes are replaced only
// during checkups. But the company wants to save even more money by skipping
// checkups when they are not necessary. Since the pipes corrode at a constant
// speed, it is enough to have 2 measurements of a pipe’s strength and calculate
// how much time remains before it needs to be replaced. This needs to be
// rounded down to years since the repair can only happen during a checkup – so
// if a pipe is going to break after 2 years and 11 months, the company needs to
// replace it after 2 years, because otherwise the pipe will be broken and leak
// water for 1 month until the 3rd year checkup. Write a program which, given
// two arrays of consecutive strength measurements (measured when the pipes were
// installed and the year after that) of all the pipes, calculates the lifetimes
// of the pipes (i.e. how many years after it was installed it needs to be
// replaced). Input The first line of the standard input will contain a single
// positive integer number N – the number of pipes. The second line of the
// standard input will contain an array of N positive integer numbers, separated
// by single spaces, representing the measurements of each pipe, made during
// this year’s checkup – let’s call them a checkup. The second line of the
// standard input is analogous to the first but contains the measurements from
// last year – when the pipes were installed – let’s call it installation. So,
// the strength of pipe i last year was installation[i] and this year it is
// checkup[i].

void readInputStringOutputVectorInt(vector<int> &output) {
  string input;
  getline(cin >> ws, input);

  istringstream readStream(input);

  int bufferNumber;
  while (readStream >> bufferNumber)
    output.push_back(bufferNumber);
}

int main() {
  vector<int> installation, checkup;

  size_t pipes;
  cin >> pipes;
  // cin.ignore(); // !!

  installation.reserve(pipes);
  checkup.reserve(pipes);

  readInputStringOutputVectorInt(checkup);
  readInputStringOutputVectorInt(installation);

  for (size_t currPipe = 0; currPipe < pipes; currPipe++) {
    int decay = installation[currPipe] - checkup[currPipe];

    cout << installation[currPipe] / decay << ' ';
  }

  cout << endl;

  return 0;
}

// 3
// 3 2 2
// 5 4 3