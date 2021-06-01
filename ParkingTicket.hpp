#pragma once
#include "bits/stdc++.h"
using namespace std;
// This seems like something you don't want to change, so have appropriate const qualifiers
class ParkingTicket {
    // can be avoided, everything is private by default
    // also, we could keep a static datamember for serial assignment
    // and increment it when a new parking ticket is alloted
    string serial;
    const int floor;

  public:
    // ParkingTicket(string serial) = default serial(serial);
    ParkingTicket(const string &serial, const int &floor)
        : serial(serial), floor(floor) {}

    const string &getSerial() { return serial; }

    int getFloor() { return floor; }

    friend ostream& operator<<(ostream& stream, const ParkingTicket& ticket) {
	stream<<ticket.serial<<", "<<ticket.floor;
	return stream;
    }
};
