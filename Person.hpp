#pragma once
#include "bits/stdc++.h"
#include "Vehicle.hpp"
using namespace std;

    class Person
    {
        private:
        string name;
        Vehicle *vehicleType;
        
        public:
        Person() = default;
        Person(string n, Vehicle v ) : vehicleType(&v) {
            name = n;
        }
        
        string getName()
        {
            return name;
        }
        void setName(string n)
        {
             name = n;
        }
        
        VehicleType getType()
        {
            return vehicleType->getType();
        }
        void setType(Vehicle v)
        {
             vehicleType = &v;
        }
    };

