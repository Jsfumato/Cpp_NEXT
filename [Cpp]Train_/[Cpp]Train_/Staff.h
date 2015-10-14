//
//  Staff.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Staff_h
#define Staff_h

#include "Util.h"
#include "Passenger.h"
#include "Platform.h"
#include "Booth.h"

class Staff
{
private:
    bool isWork;
    Passenger* myPassenger;
    int startTime;
    int timeToEnd;
    Platform* platform;
    Booth* booth;
    
    void CompleteTicketing();
    
public:
    Staff() :isWork(false),myPassenger(nullptr)
    {
        platform = Platform::GetInstance();
    }
    
    void SetBooth(Booth* tBooth);
    void DoWork();
    void GetNextPassenger();
    void ShowMyPassenger();
};

#endif /* Staff_h */
