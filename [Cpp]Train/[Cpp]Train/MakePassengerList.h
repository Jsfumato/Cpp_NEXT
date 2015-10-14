//
//  MakePassengerList.h
//  [Cpp]Train
//
//  Created by Jsfumato on 2015. 10. 7..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include "Util.h"

#ifndef MakePassengerList_h
#define MakePassengerList_h


using namespace std;

class MakePassengerList
{
private:
    static string fileSrc;
    
public:
    static Queue<Passenger> makeList()
    {
        Queue<Passenger>* passengerList = new Queue<Passenger>(50);

//        ifstream inFile(fileSrc);
//        
//        int index = 0;
//        char inputString[50][200];
//        
//        inFile.getline(inputString[index], 200);
//        
//        while(inFile.getline(inputString[index++], 100));
//        
//        for(int i = 0; i<50; i++)
//        {
//            cout << inputString[i] << endl;
//        }
        
        return *passengerList;
    }
};

string MakePassengerList::fileSrc = "/Users/NEXT/Documents/Cpp_1/[Cpp]Train/[Cpp]Train/data/passengerList.csv";

#endif /* MakePassengerList_h */
