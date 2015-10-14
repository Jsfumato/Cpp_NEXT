//
//  Booth.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 14..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

//#include <stdio.h>
#include "Booth.h"

void Booth::AddWaitingQueue(Passenger* p)
{
    waitingQueue->Enqueue(p);
}

Passenger* Booth::GetWaitingPassenger()
{
    return waitingQueue->Dequeue();
}

void Booth::ShowReadyQueue()
{
//    cout << "[ Show Ready Queue ]" << endl;
    cout << "\n============= 부스 대기 승객 =============" << endl;
    waitingQueue->Relocate();
    for(int i=0; i<waitingQueue->GetCount(); i++)
    {
        Passenger* p = waitingQueue->Get(i);
        cout << p->GetId() << ", 티케팅 대기 : " << p->GetTicketingReady() << "분" << endl;
    }
    cout << endl;
};