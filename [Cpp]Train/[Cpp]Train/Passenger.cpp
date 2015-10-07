//
//  Passenger.cpp
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Passenger.h"
#include "Util.h"

void Passenger::SetTicketingStart(int time){
    ticketingStart = time;
};

int Passenger::GetId() const
{
    return id;
};

int Passenger::GetArrivalTime() const
{
    return arrivedTime;
};

int Passenger::GetTicketingTime() const
{
    return ticketingTime;
}

int Passenger::GetTravelTime() const
{
    return TravelTimeTable.travelTime(stationFrom, stationTo);
}

int Passenger::GetTicketingReady() const
{
    if(ticketingStart == -1)
        return Util::curTime - arrivedTime;
    return ticketingStart - arrivedTime;
}

int Passenger::GetTrainReady() const
{
    return leaveTime - (arrivedTime+ GetTicketingReady()+ GetTicketingTime());
}

int Passenger::GetLeaveTime() const{
    return leaveTime;
}

int Passenger::GetFinalTime() const{
    return finalTime;
}

void Passenger::SetFinalTime(int time){
    finalTime = time;
}

void Passenger::SetLeaveTime(int time){
    leaveTime = time;
}

string Passenger::GetResultData() const{
    //		bw.write("아이디,이름,부스도착시간,매표소요시간,이동소요시간,출발역,도착역,매표대기시간,열차대기시간,출발시간,도착시간\n");
    return id+","+name+","+arrivedTime+","+ticketingTime+","+GetTravelTime()+","
    +stationFrom+","+stationTo+","+GetTicketingReady()+","+GetTrainReady()+","+leaveTime+","+finalTime;
}
