#pragma once
#include "bits/stdc++.h"
#include "common.hpp"
using namespace std;
// namespace models
// {
   
    class Vehicle
    {
        
        private:
        string nmPlate;
        VehicleType typeOfVehicle;
        public:
        // Vehicle(string nbr, VehicleType v) :nmPlate(nbr), typeOfVehicle(v) {}
        void setType(VehicleType v)
        {
            typeOfVehicle = v;
        }
        void setPlateNo(string n)
        {
            nmPlate = n;
        }
        VehicleType getType()
        {
            return typeOfVehicle;
        }
        string getPlateNo()
        {
            return nmPlate;
        }

    };
    // class Bus : public Vehicle{
    //     public:
    //     Bus(string type):Vehicle(type)
    //     {

    //     }
    // };
    // class Car : public Vehicle{
    //     public:
    //     Car(string type):Vehicle(type)
    //     {
            
    //     }
    // };
// }

