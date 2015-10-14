//
//  TimeTable.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 14..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "TimeTable.h"

void TimeTable::MakeTimeTable()
{
    ifstream inFile(fileSrc);
    
    int index = 0;
    char tablePos[8][80];
    
    inFile.getline(tablePos[index], 80);
    while(inFile.getline(tablePos[index++], 100));
    for(int i = 0; i<8; i++)
    {
        char* result[8];
        Split::SplitByChar(result, tablePos[i], ',');
        
        for(int j=0; j<7; j++)
        {
            intTable[i][j] = stoi(result[j+1]);
        }
    }
    
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            cout << intTable[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int TimeTable::TravelTime(string from, string to)
{
    return intTable[ToInt(from)][ToInt(to)];
}

int TimeTable::ToInt(string string)
{
    for(int i=0; i<7; i++)
    {
        if(arr[i] == string){
            return i;
        }
    }
    return -1;
}