#pragma once
#include "bits/stdc++.h"
#include "ParkingSpot.hpp"
using namespace std;
class ParkingFloor
{
    private:
    int nSpots;
    vector<ParkingSpot*> spots;
    public:
    ParkingFloor(int n)
    {
        nSpots = n;
        for(int i = 0; i<nSpots;i++)
        {
            ParkingSpot *p = new ParkingSpot();
            p->setStatus(true);
            spots.push_back(p);
        }
    }
    bool getEmptySpots()
    {
        for(int i = 0;i<spots.size();i++)
        {
            if(spots[i]->getStatus())
            {
               return true;     
            } 
        }
        return false;
    }
    void parkInSpot(Person p, ParkingTicket tkt)
    {
        for(int i = 0;i<spots.size();i++)
        {
            if(spots[i]->getStatus())
            {
               spots[i]->fillSpot(p,tkt) ; 
               cout<<"Parked person "<<p.getName()<<" has vehicle "<<p.getType()<<endl;  
               break;
            } 
        }

    }
    bool getSpotWithPerson(Person p)
    {
        for(int i = 0;i<spots.size();i++)
        {
            if(!spots[i]->getStatus() && (p.getName() == spots[i]->getPersonInSpot(p).getName()) )
            {
               spots[i]->freeSpot();
               return true;
            } 
        }
        return false;

    }
};