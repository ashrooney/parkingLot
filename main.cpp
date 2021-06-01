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
    string x = "";
   
    Vehicle v("UP25XXXX", VehicleType::CAR);

    // TODO: never allow clients to create this
    // you could explore private constructors and friend functions
    // TODO: this should be done inside the ParkingLot::parkVehicle method
    // TODO: implement the id generation using a static unsigned int
    // whenever you create a new ticket, auto increment the static int and use
    // the number to init new tickets
    ParkingTicket tkt(x, 2);
    // Check this class for ostream
    cout<<tkt<<endl;

    // TODO: this class is not required
    Person p;
    p.setName("Ashish");
    p.setType(v);

    // This should return a token and use auto variables more
    pl.parkVehicle(p,tkt);
    // TODO: implement the pending amount calculation using async when creating the ParkingLot object

    // TODO: This should take in a token/token id and say, return a Vehicle, free up the spot, calculate pending amount
    pl.unParkVehicle(p);

    // Implement a simple UI and store the list of tokens in main in a vector and test out cost calculations,
    // correct vehicle etc. 
    // OR write some use cases using std::wait in the main thread. you can check if correct time and vehicle
    // is being returned or not. write asserts to make sure your code is working fine
   
    return 0;
}
