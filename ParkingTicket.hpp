#pragma once
#include "bits/stdc++.h"
using namespace std;
class ParkingTicket
{
    private:
    string serial;
    int floor;

    public:
    ParkingTicket() = default;
    ParkingTicket(string sno)
    {
        serial = sno;
        
    }
    string getSerial()
    {
        return serial;
    }
    void setFloor(int fl)
    {
        floor = fl;
        // return 0;
    }
    int getFloor()
    {
        return floor;
    }
};