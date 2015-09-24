//
//  Truck.h
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Truck_h
#define Truck_h

#include <iostream>
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    int distance;
    int fuelEfficiency;
    
public:
    int CalcTripDistance();
    int CalcFuelEfficiency();
    double CalcFuelNeeds();
    void ShowInfo();
    
    Truck(int distance, int fuelEfficiency) : Vehicle(distance, fuelEfficiency)
    {
        std::cout << "Truck Created" << std::endl;
        std::cout << distance <<", " << fuelEfficiency <<"\n"<< std::endl;
    }
};

#endif /* Truck_h */
