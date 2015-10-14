//
//  main.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 11..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include "Util.h"
#include "Queue.h"
#include "Passenger.h"
#include "MakePassengerList.h"
#include "Staff.h"
#include "Booth.h"
#include "Platform.h"
#include "TimeTable.h"
#include "MakeResultList.h"

Platform* Platform::instance = nullptr;
TimeTable* TimeTable::instance = nullptr;
MakePassengerList* MakePassengerList::instance = nullptr;
MakeResultList* MakeResultList::instance = nullptr;

int curTime = 0;

int main(int argc, const char * argv[]) {
    
//  승객 리스트 생성
    MakePassengerList* pList = MakePassengerList::GetInstance();
    MakeResultList* makeRList = MakeResultList::GetInstance();

    Queue<Passenger*>* passengerList = pList->MakeList();
    
    for(int i=0; i<50; i++)
    {
        passengerList->Get(i)->ShowInfo();
    }
    
//	승객 받을 booth 생성
    Booth* booth = new Booth();
    Staff* staffList = new Staff[3];
    for(int i=0; i<3; i++)
    {
        staffList[i].SetBooth(booth);
    }

//	열차 대기할 플랫폼
    Platform* platform = Platform::GetInstance();
    TimeTable* tTable = TimeTable::GetInstance();
    tTable->MakeTimeTable();
    
//	모든 승객의 결과가 나올 때까지 돌아갑니다.
    while(makeRList->GetCount() < 50)
    {
        cout << "+----------------------------------------------+" << endl;
        cout << "| 현재시각 : " << curTime << "분" << endl;
        cout << "| 현재시간 입장 부스 입장 전 " << endl;
        cout << "+----------------------------------------------+" << endl;
        cout << "\n============= 부스 도착 승객 =============" << endl;
        cout << "[아이디]\t[이름]\t[부스도착]\t[매표소요]\t[이동소요]" << endl;
        
        for(int i=0; i<passengerList->GetCount(); i++)
        {
            Passenger* p = passengerList->Get(i);
            if(curTime == p->GetArrivalTime())
            {
                booth->AddWaitingQueue(p);
                p->ShowInfo();
            }
        }

//        booth->DoTicketing();
        cout << "\n[ Booth Ticketing ]" << endl;
        for(int i=0; i<3; i++){
            staffList[i].DoWork();
        }
        
//        booth->ShowTicketing();
        cout << "\n============= 티켓팅 중인 승객 =============" << endl;
        for(int i=0; i<3; i++){
            staffList[i].ShowMyPassenger();
        }
        booth->ShowReadyQueue();
        
        platform->LeaveTrain();
        platform->ShowTrainWaiting();
        
        curTime++;
    }
    
    cout << curTime <<"분만에 모두 종료!" << endl;
    makeRList->ShowResult();
    makeRList->MakeResultFile();
    
    delete passengerList;
    delete platform;
    delete[] staffList;
    delete booth;

    return 0;
}
