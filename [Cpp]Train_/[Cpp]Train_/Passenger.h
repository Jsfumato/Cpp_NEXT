//
//  Passenger.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 11..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//



#ifndef Passenger_h
#define Passenger_h

#include "Util.h"
#include "Queue.h"
#include "TimeTable.h"

class Passenger
{
private:
    int     id;
    string  name;
    int     arrivedTime;
    int     ticketingTime;
    string  stationFrom;
    string  stationTo;
    int     leaveTime;
    int     finalTime;
    int     ticketingStart;
    
public:
    //	생성자
    Passenger(char* result[6])
    :id(stoi(result[0])),name(result[1]),arrivedTime(stoi(result[2])),ticketingTime(stoi(result[3])),
    stationFrom(result[4]),stationTo(result[5]),ticketingStart(-1)
    {}
    
    void    ShowInfo() const;
    int     GetId() const;
    int     GetArrivalTime() const;
    int     GetTicketingTime() const;
    int     GetTravelTime() const;
    int     GetTicketingReady() const;
    int     GetTrainReady() const;
    int     GetLeaveTime() const;
    int     GetFinalTime() const;
    
    void    SetTicketingStart(int time);
    void    SetFinalTime(int time);
    void    SetLeaveTime(int time);

    string  GetResultData() const;
};


#endif /* Passenger_h */
