#include <cctype>
#include <climits>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Captain Grant needs your help. He’s currently on leave but needs to get back
// to his ship soon. To do that, he needs to catch a bus to the train station,
// and from there take a train to the naval base. But Captain Grant hates
// waiting – he has a certain train he has to catch but can pick from several
// busses, and he wants to pick a bus which arrives as close to the train
// departure as possible. The transport company, which operates the busses to
// the station and the trains at the station, has a list of bus arrival times at
// the station, as well as information on the train departure time. Of course,
// since the company works with the military, the arrival times and the train
// departure time are in military time format – 4-digit numbers, the first two
// digits represent the hours (00 to 23), the next two digits represent the
// minutes (00 to 59). For example, two o’clock in the morning is 0200, twenty
// minutes past four in the afternoon is 1620, two minutes to midnight (the
// time, not the Iron Maiden song) is 2358, etc. Write a program which, given a
// list of bus arrival times and a train departure time, in military time
// format, finds the minimum amount of time – in minutes – between bus arrival
// and the train departure (i.e. the time Grant would have to wait if he picks
// the "best" bus) and prints the position of the bus in the bus arrival times
// list. Note that 0 waits are possible, but negative wait times aren’t
// possible. Hint: you can convert the military time format numbers into minutes
// (minutes elapsed since midnight) before calculating the time between an
// arrival time and the train time

// HH MM
int militaryToMinutes(const string &str) {
  int hour = str[0] * 10 + str[1] * 1;
  int minutes = str[2] * 10 + str[3] * 1;

  return hour * 60 + minutes;
}

int main() {
  vector<int> busDepartures;

  size_t busses;
  cin >> busses;

  busDepartures.reserve(busses);

  for (size_t currBus = 0; currBus < busses; currBus++) {
    string militaryTime;
    cin >> militaryTime;

    busDepartures.push_back(militaryToMinutes(militaryTime));
  }

  string trainDepartureInput;
  cin >> trainDepartureInput;

  int trainDeparture = militaryToMinutes(trainDepartureInput);

  int bestBusDifferenceTime = INT_MAX;
  size_t bestBusIndex = 0;

  for (size_t currBus = 0; currBus < busses; currBus++) {
    int currBussArrival = busDepartures[currBus];

    int difference;

    if (trainDeparture >= currBussArrival) {
      difference = trainDeparture - currBussArrival;
    } else {
      difference = 24 * 60 - currBussArrival;
      difference += trainDeparture;
    }

    if (difference < bestBusDifferenceTime) {
      bestBusDifferenceTime = difference;
      bestBusIndex = currBus + 1;
    }
  }

  cout << bestBusIndex << endl;

  return 0;
}

// 4
// 2013 0130 0004 0012
// 2122