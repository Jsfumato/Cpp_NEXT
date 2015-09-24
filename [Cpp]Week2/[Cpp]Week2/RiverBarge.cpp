//
//  RiverBarge.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "RiverBarge.h"
#include "Vehicle.h"

using namespace std;

int RiverBarge::CalcFuelEfficiency()
{
    return fuelEfficiency;
}

int RiverBarge::CalcTripDistance()
{
    return distance;
}

double RiverBarge::CalcFuelNeeds()
{
    return Vehicle::CalcFuelNeeds()*1.2;
}

void RiverBarge::ShowInfo()
{
    cout << "[종   류] RiverBarge" << endl;
    Vehicle::ShowInfo();
}