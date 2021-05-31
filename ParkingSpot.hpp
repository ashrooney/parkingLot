#pragma once
#include "bits/stdc++.h"
#include "Person.hpp"
#include "ParkingTicket.hpp"
using namespace std;
class ParkingSpot
{
    private:
    bool isEmpty;
    Person *p;
    ParkingTicket *prk;
    public:
    ParkingSpot(bool emp)
    {
        isEmpty = emp;
    }
    ParkingSpot() = default;
    void setStatus(bool st)
    {
        isEmpty = st;
    }
    bool getStatus()
    {
        if(isEmpty)
            return true;
        return false;
    }
    void fillSpot(Person per, ParkingTicket t)
    {
        p = &per;
        prk = &t;
        isEmpty = false;
    }
    Person getPersonInSpot(Person p)
    {
        return p;
    }
    void freeSpot()
    {
        p = NULL;
        prk = NULL;
        isEmpty = true;
        
        // cout<<"Henlo"<<endl;
    }

};