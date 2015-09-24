//
//  Vehicle.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Vehicle.h"

using namespace std;

int Vehicle::CalcFuelEfficiency()
{
    return fuelEfficiency;
}

int Vehicle::CalcTripDistance()
{
    return distance;
}

double Vehicle::CalcFuelNeeds()
{
    return (double)CalcTripDistance()/CalcFuelEfficiency();
}

void Vehicle::ShowInfo()
{
    cout << "[연   비] " << CalcFuelEfficiency() << endl;
    cout << "[이동거리] " << CalcTripDistance() << endl;
    cout << "[필요연료] " << CalcFuelNeeds() << endl;
}