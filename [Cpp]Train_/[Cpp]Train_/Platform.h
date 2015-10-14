//
//  Platform.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//


#ifndef Platform_h
#define Platform_h

#include "Util.h"
#include "Queue.h"
#include "Passenger.h"
#include "MakeResultList.h"

class Platform
{
private:
    Queue<Passenger*>* trainWaitingQueue;
    MakeResultList* mrList;
    static Platform* instance;
    Platform() :TERM(3),mrList(MakeResultList::GetInstance())
    {
        cout << "[ Create Platform ]" << endl;
        trainWaitingQueue = new Queue<Passenger*>(50);
    }
    int TERM;

public:
    static Platform* GetInstance()
    {
        if(instance == nullptr)
        {
            instance = new Platform();
        }
        return instance;
    }
    
    void AddTrainWaitingQueue(Passenger* p);
    bool CheckTrainLeave();
    void ShowTrainWaiting();
    void LeaveTrain();
};

#endif /* Platform_h */
