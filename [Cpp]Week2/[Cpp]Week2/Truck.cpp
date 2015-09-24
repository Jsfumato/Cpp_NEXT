//
//  Truck.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Truck.h"

using namespace std;

int Truck::CalcFuelEfficiency()
{
    return fuelEfficiency;
}

int Truck::CalcTripDistance()
{
    return distance;
}

double Truck::CalcFuelNeeds()
{
    return Vehicle::CalcFuelNeeds()*1.1;
}

void Truck::ShowInfo()
{
    cout << "[종   류] Truck" << endl;
    Vehicle::ShowInfo();
}