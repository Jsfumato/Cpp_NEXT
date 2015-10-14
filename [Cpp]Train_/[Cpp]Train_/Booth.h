//
//  Booth.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Booth_h
#define Booth_h

#include "Util.h"
#include "Queue.h"
#include "Passenger.h"

class Booth
{
private:
    Queue<Passenger*>* waitingQueue;
    
public:
    Booth()
    {
        waitingQueue = new Queue<Passenger*>(50);
    }
    
    void AddWaitingQueue(Passenger* p);
    Passenger* GetWaitingPassenger();
    void ShowReadyQueue();
};

#endif /* Booth_h */
