//
//  Passenger.h
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Passenger_h
#define Passenger_h

#include <string>

using namespace std;

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
    Passenger(string[] token)
    {
        id = Integer.parseInt(token[0]);
        name = token[1];
        arrivedTime = Integer.parseInt(token[2]);
        ticketingTime = Integer.parseInt(token[3]);
        stationFrom = token[4];
        stationTo = token[5];
        ticketingStart = -1;
    }
    
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
//    
//    @Override
//    public String toString() {
//        return 	"   "+id +"\t"+ 
//        name +"\t"+ 
//        "  "+arrivedTime +"분\t"+ 
//        "  "+ticketingTime +"분\t"+
//        "  "+getTravelTime() +"분";
//    }
}
#endif /* Passenger_h */
