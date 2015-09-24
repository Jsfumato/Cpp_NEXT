//
//  ShippingMain.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Company.h"
#include "Vehicle.h"
#include "Truck.h"
#include "RiverBarge.h"
#include "FuelNeedsReport.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Company* company = Company::GetInstance();
    
    Truck* t1 = new Truck(300, 30);
    Truck* t2 = new Truck(100, 20);
    Truck* t3 = new Truck(200, 10);
    
    RiverBarge* r1 = new RiverBarge(100, 5);
    RiverBarge* r2 = new RiverBarge(500, 5);
    
    company->AddVehicle(t1);
    company->AddVehicle(t2);
    company->AddVehicle(t3);
    company->AddVehicle(r1);
    company->AddVehicle(r2);
    
    company->ShowVehicleList();
    
    FuelNeedsReport::CalcTotalFuel();

    return 0;
}

