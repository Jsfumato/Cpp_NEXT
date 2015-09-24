//
//  Company.h
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Company_h
#define Company_h

#include <iostream>
#include "Vehicle.h"
#define MAX_INDEX 10

class Company
{
private:
    
    Vehicle* list[MAX_INDEX];
    Company()
    {
        for(int i=0; i<MAX_INDEX; i++) {
            list[i] = new Vehicle(0,0);
        }
        index = 0;
        std::cout << "Company Created" << std::endl;
    };
    static Company* instance;
    int index;
    
public:
    static Company* GetInstance()
    {
        if(instance == NULL)
            instance = new Company();
        return instance;
    };
    void AddVehicle(class Vehicle* vehicle);
    void ShowVehicleList();
    Vehicle* GetVehicleByIndex(int num);
    int GetIndex();
};

#endif /* Company_h */
