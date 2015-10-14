//
//  MakePassengerList.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 11..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef MakePassengerList_h
#define MakePassengerList_h

#include "Util.h"
#include "Queue.h"
#include "Passenger.h"
#include "Split.h"

using namespace std;

class MakePassengerList
{
private:
    string fileSrc = "/Users/NEXT/Documents/Cpp_1/[Cpp]Train_/[Cpp]Train_/data/passengerList.csv";
    MakePassengerList(){}
    static MakePassengerList* instance;
    
public:
    static MakePassengerList* GetInstance()
    {
        if(instance == nullptr)
        {
            instance = new MakePassengerList();
        }
        return instance;
    }
    
    Queue<Passenger*>* MakeList();
};

#endif /* MakePassengerList_h */
