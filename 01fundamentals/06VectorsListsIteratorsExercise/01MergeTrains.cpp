#include <cctype>
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

// At a certain train station, trains arrive on two tracks – Track A and Track B
// – and are merged onto a single track. Each railcar has a number, and in each
// train, the railcars are ordered by number – the front railcar has the lowest
// number, the back railcar has the highest number. Given the railcar numbers on
// Track A and Track B, given from the back car to the front car, print the
// order in which railcars from Track A and Track B should be merged into the
// single track, then print the new train configuration, starting from the last
// railcar and finishing at the first railcar. Railcars are moved to start from
// the front to the back (i.e. you can only move the front car of a train). Each
// time you move a railcar from the parallel tracks A and B to the merge track,
// it pushes forward any railcars that are already there.

void printList(const list<int> &numbers) {
  for (int number : numbers) {
    cout << number << " ";
  }

  cout << endl;
}

void readList(istream &istr, list<int> &output) {
  int bufferNum;

  while (istr >> bufferNum)
    output.push_back(bufferNum);
}

void readList(const string &buffer, list<int> &output) {
  istringstream istr(buffer);

  readList(istr, output);
}

void readTrain(istream &istr, list<int> &train) {
  string trainString;
  getline(istr, trainString);

  readList(trainString, train);
}

void mergeFrom(list<int> &finalTrain, list<int>::iterator &it, string &mergeRes,
               char trainChar) {
  mergeRes.insert(mergeRes.begin(), trainChar);
  finalTrain.push_back(*it);
  it++;
}

int main() {
  list<int> trainA, trainB;
  readTrain(cin, trainA);
  readTrain(cin, trainB);

  string mergeRes; // ABAA

  list<int> finalTrain;
  list<int>::iterator itA = trainA.begin(), itB = trainB.begin();

  while (itA != trainA.end() || itB != trainB.end()) {
    if (itA == trainA.end()) // if trainA is over there is only trainB
      mergeFrom(finalTrain, itB, mergeRes, 'B');
    else if (itB == trainB.end()) // if trainB is over there is only trainA
      mergeFrom(finalTrain, itA, mergeRes, 'A');
    else {
      if (*itA > *itB)
        mergeFrom(finalTrain, itA, mergeRes, 'A');
      else
        mergeFrom(finalTrain, itB, mergeRes, 'B');
    }
  }

  cout << mergeRes << endl;
  printList(finalTrain);

  return 0;
}

// 11 4 2 1
// 5 3
