//
//  FuelNeedsReport.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "FuelNeedsReport.h"
#include "Company.h"

using namespace std;

void FuelNeedsReport::CalcTotalFuel()
{
    Company* company = Company::GetInstance();
    double result = 0;
    
    for (int i=0; i<company->GetIndex(); i++) {
        Vehicle* v = company->GetVehicleByIndex(i);
        result += v->CalcFuelNeeds();
    }
    cout << "[총 필요연료] " << result << endl;
}