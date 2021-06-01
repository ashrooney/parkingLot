#pragma once
#include "bits/stdc++.h"
#include "common.hpp"
using namespace std;
// namespace models
// {
   
// same as parking ticker
    class Vehicle
    {
        
        const string nmPlate;
        const VehicleType typeOfVehicle;
        public:
        // Vehicle(string nbr, VehicleType v) :nmPlate(nbr), typeOfVehicle(v) {}
	Vehicle(const string& nmPlate, VehicleType typeOfVehicle) : nmPlate(nmPlate), typeOfVehicle(typeOfVehicle) {}
        /*void setType(VehicleType v)
        {
            typeOfVehicle = v;
        }
        void setPlateNo(string n)
        {
            nmPlate = n;
        }*/
        VehicleType getType()
        {
            return typeOfVehicle;
        }
        string getPlateNo()
        {
            return nmPlate;
        }

    };
// if you are using polymorphism, then we don't need VehicleType variable
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

