//
//  Passenger.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 12..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "Passenger.h"

void Passenger::ShowInfo() const
{
    cout << "["<< id << "] " << name << ", " << arrivedTime << ", " << ticketingTime << ", " << stationFrom << ", " <<  stationTo <<endl;
}

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
    TimeTable* tTable = TimeTable::GetInstance();
    return tTable->TravelTime(stationFrom, stationTo);
}

int Passenger::GetTicketingReady() const
{
    extern int curTime;
    if(ticketingStart == -1)
        return curTime - arrivedTime;
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

string Passenger::GetResultData() const
{
    return to_string(id)+","+
    name+","+
    to_string(arrivedTime)+","+
    to_string(ticketingTime)+","+
    to_string(GetTravelTime())+","+
    stationFrom+","+
    stationTo+","+
    to_string(GetTicketingReady())+","+
    to_string(GetTrainReady())+","+
    to_string(leaveTime)+","+
    to_string(finalTime)+"\n";
}