//
//  Staff.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Staff.h"

void Staff::CompleteTicketing()
{
    isWork = false;
    platform->AddTrainWaitingQueue(myPassenger);
    myPassenger = nullptr;
}

void Staff::DoWork()
{
    extern int curTime;
    cout << "[ Do Work ] : " << isWork << endl;
    if(!isWork){
        GetNextPassenger();
        return;
    }else{
        if(timeToEnd == curTime){
            CompleteTicketing();
            GetNextPassenger();
            return;
        }
        return;
    }
}

void Staff::ShowMyPassenger()
{
    if(myPassenger == nullptr)
        return;
    cout << "[ Working ] " << myPassenger->GetId() << endl;
}

void Staff::GetNextPassenger()
{
    if(!booth){
        cout << "[ Booth 지정 필요! ]" << endl;
        return;
    }
    
    myPassenger = booth->GetWaitingPassenger();
    if(myPassenger == nullptr)
    {
        cout << "[ 손님 없음 ]" << endl;
        return;
    }
    
    isWork = true;
    extern int curTime;
    startTime = curTime;
    myPassenger->SetTicketingStart(startTime);
    timeToEnd = startTime + myPassenger->GetTicketingTime();
}

void Staff::SetBooth(Booth* tBooth)
{
    booth = tBooth;
}


