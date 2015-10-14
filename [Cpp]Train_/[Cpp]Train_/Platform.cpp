//
//  Platform.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 14..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Platform.h"

void Platform::AddTrainWaitingQueue(Passenger* p)
{
    trainWaitingQueue->Enqueue(p);
}

bool Platform::CheckTrainLeave()
{
    extern int curTime;
    return (curTime % TERM == 0) ? true : false;
}

void Platform::ShowTrainWaiting()
{
    cout << "============= 열차 대기 승객 =============" << endl;
    cout << "[아이디]\t[이름]\t[부스도착]\t[매표소요]\t[이동소요]" << endl;
    
    trainWaitingQueue->Relocate();
    for(int i=0; i<trainWaitingQueue->GetCount(); i++)
    {
        Passenger* p = trainWaitingQueue->Get(i);
        p->ShowInfo();
    }
    cout << endl;
}

void Platform::LeaveTrain(){
    extern int curTime;
    if(CheckTrainLeave()){
        cout << "[ 열차 출발합니다 ]" << endl;
        
        trainWaitingQueue->Relocate();
        for(int i=0; i<trainWaitingQueue->GetCount(); i++)
        {
            Passenger* p = trainWaitingQueue->Get(i);
            p->SetLeaveTime(curTime);
            p->SetFinalTime(p->GetLeaveTime() + p->GetTravelTime());
            mrList->AddResult(p);
        }
        trainWaitingQueue->Clear();
        delete trainWaitingQueue;
        trainWaitingQueue = new Queue<Passenger*>(50);
    }
}