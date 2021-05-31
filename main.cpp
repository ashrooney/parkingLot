#include "bits/stdc++.h"
#include "ParkingLot.hpp"
#include "Person.hpp"

using namespace std;
int main()
{
    // VehicleType type = bus;
    // string nbr = "UP25XXXX";
    // Vehicle v(nbr, type);
    // ParkingTicket prk("tkt1",2);
    // Person p("Ashish",v,prk );
    // // Person p;
    // // p.setName("Ashish");
    // cout<<p.getName()<<endl;
    // // p.setTicket(prk);
    // // p.setType(v);
    // cout<<p.getType()<<endl;
    ParkingLot pl(3); // parking lot of 3 floors with 10 spots in each
   
    string str = "UP25XXX";
    Vehicle v;

     VehicleType vtype = car;
    v.setType(vtype);

    v.setPlateNo("UP25XXXX");
    ParkingTicket tkt("1");
    Person p;
    p.setName("Ashish");
    p.setType(v);
    pl.parkVehicle(p,tkt);
    pl.unParkVehicle(p);
   
    
    
    return 0;
}