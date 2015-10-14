//
//  MakePassengerList.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 11..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include "MakePassengerList.h"

Queue<Passenger*>* MakePassengerList::MakeList()
{
    wcout.imbue(std::locale("ko_KR.UTF-8"));
    Queue<Passenger*>* passengerList = new Queue<Passenger*>(50);

    wstring buff;
    wifstream inFile(fileSrc);

    getline(inFile, buff);

    while(getline(inFile,buff))
    {
        wcout << buff << endl;
        char* result[6];

        Split::SplitByWchar(result, buff.c_str(), ',');
        Passenger* asdf = new Passenger(result);
        
        passengerList->Enqueue(asdf);
    }
    return passengerList;
}
