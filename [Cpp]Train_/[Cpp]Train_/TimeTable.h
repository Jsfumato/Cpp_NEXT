//
//  TimeTable.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 13..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef TimeTable_h
#define TimeTable_h

#include "Util.h"
#include "Split.h"

using namespace std;

class TimeTable
{
private:
    string arr[7] = { "Seoul", "Chuncheon", "Wonju", "Gyeongju", "Deajeon", "Asan" ,"Gwangju" };
    string fileSrc = "/Users/NEXT/Documents/Cpp_1/[Cpp]Train_/[Cpp]Train_/data/timeTable.csv";
    int intTable[7][7];
    TimeTable(){}
    static TimeTable* instance;

public:
    static TimeTable* GetInstance()
    {
        if(instance == nullptr)
        {
            instance = new TimeTable();
        }
        return instance;
    }
    
    void MakeTimeTable();
    int TravelTime(string from, string to);
    int ToInt(string string);
};

#endif /* TimeTable_h */
