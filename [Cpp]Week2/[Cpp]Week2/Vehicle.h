//
//  Vehicle.h
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Vehicle_h
#define Vehicle_h

#include <iostream>

class Vehicle
{
private:
    int distance;
    int fuelEfficiency;

public:
    int CalcTripDistance();
    int CalcFuelEfficiency();
    virtual double CalcFuelNeeds();
    virtual void ShowInfo();
    
    Vehicle(int distance, int fuelEfficiency) : distance(distance),fuelEfficiency(fuelEfficiency)
    {
//        std::cout << "Vehicle Created" << std::endl;
    }
};

#endif /* Vehicle_h */
