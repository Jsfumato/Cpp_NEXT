//
//  RiverBarge.h
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef RiverBarge_h
#define RiverBarge_h

#include <iostream>
#include "Vehicle.h"

class RiverBarge : public Vehicle
{
private:
    int distance;
    int fuelEfficiency;
    
public:
    int CalcTripDistance();
    int CalcFuelEfficiency();
    double CalcFuelNeeds();
    void ShowInfo();
    
    RiverBarge(int distance, int fuelEfficiency) : Vehicle(distance, fuelEfficiency)
    {
        std::cout << "RiverBarge Created" << std::endl;
        std::cout << distance <<", " << fuelEfficiency <<"\n"<< std::endl;
    }
};


#endif /* RiverBarge_h */
