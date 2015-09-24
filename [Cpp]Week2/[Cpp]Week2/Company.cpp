//
//  Company.cpp
//  [Cpp]Week2
//
//  Created by Jsfumato on 2015. 9. 24..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Company.h"

using namespace std;

void Company::AddVehicle(class Vehicle* vehicle)
{
    if(index < MAX_INDEX)
    {
        list[index++] = vehicle;
    }
    else
    {
        cout << "가득 찼습니다!" << endl;
    }
}

void Company::ShowVehicleList()
{
    for (int i=0; i<index; i++) {
        list[i]->ShowInfo();
        cout << endl;
    }
}

Vehicle* Company::GetVehicleByIndex(int num){
    return list[num];
}

int Company::GetIndex()
{
    return index;
}

Company* Company::instance = NULL;