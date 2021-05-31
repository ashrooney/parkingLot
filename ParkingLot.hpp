#pragma once
#include "bits/stdc++.h"
#include "ParkingFloor.hpp"
using namespace std;
class ParkingLot
{
    private:
    int nFloors;
    vector<ParkingFloor*> floors;
    public:
    ParkingLot(int n)
    {
        nFloors = n;
        for(int i = 0; i<n;i++)
        {
            ParkingFloor *f = new ParkingFloor(10);
            floors.push_back(f);
        }
    }
    void parkVehicle(Person p, ParkingTicket tkt)
    {
        for(int i = 0;i<floors.size();i++)
        {
            ParkingFloor *currFloor = floors[i];
            if(currFloor->getEmptySpots())
            {
                currFloor->parkInSpot(p,tkt);
                break;
            }

        }
    }
    void unParkVehicle(Person p)
    {
        for(int i = 0;i<floors.size();i++)
        {
            ParkingFloor *currFloor = floors[i];
            bool b = currFloor->getSpotWithPerson(p);
            if(b){
                cout<<"Person "<<p.getName()<<" is unparked"<<endl;
                return;
            } 
        }
        cout<<"Not found"<<endl;
    }
};