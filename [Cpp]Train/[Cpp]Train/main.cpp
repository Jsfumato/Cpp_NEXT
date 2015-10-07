//
//  main.cpp
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "Queue.cpp"
#include "Passenger.h"

int main(int argc, const char * argv[]) {
    
//		승객 리스트 생성
    Queue<Passenger> passengerList = MakePassengerList.makeList();
    
/*
//		승객 받을 booth 생성
    TicketBooth booth = new TicketBooth();
        
//		열차 대기할 플랫폼
    Platform platform = Platform.getInstance();
    TravelTimeTable.showTable();
        
//		동작 cycle
//		모든 승객의 결과가 나올 때까지 돌아갑니다.
    
    while(ResultList.getNumOfResult() < 50){
            System.out.println("**** 현재시각 : "+curTime+"분 *********************");
            System.out.println("============= 현재시간 입장 부스 입장 전 =============");
            System.out.println("[아이디]\t[이름]\t[부스도착]\t[매표소요]\t[이동소요]");
            Iterator<Passenger> iter = passengerList.iterator();
            while(iter.hasNext()){
                Passenger c = iter.next();
                System.out.println(c);
                if(curTime == c.getArrivalTime()){
                    booth.addWaitingQueue(c);
                    iter.remove();
                }
            }
            //			booth.showReadyQueue();
            booth.doTicketing();
            booth.showTicketing();
            booth.showReadyQueue();
            platform.leaveTrain();
            platform.showTrainWaiting();
            curTime++;
        }
        ResultList.showResult();
        ResultList.makeResultFile("Result_2");
    }
*/
    return 0;
}
