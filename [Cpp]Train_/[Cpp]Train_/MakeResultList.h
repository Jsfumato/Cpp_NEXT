//
//  MakeResultList.h
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 13..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef MakeResultList_h
#define MakeResultList_h

#include "Util.h"
#include "Queue.h"
#include "Passenger.h"

class MakeResultList
{
private:
    Queue<Passenger*>* resultQueue;
    string fileSrc = "/Users/NEXT/Documents/Cpp_1/[Cpp]Train_/[Cpp]Train_/data/";
    MakeResultList()
    {
        resultQueue = new Queue<Passenger*>(50);
    }
    static MakeResultList* instance;

public:
    static MakeResultList* GetInstance()
    {
        if(instance == nullptr)
        {
            instance = new MakeResultList();
        }
        return instance;
    }
    
    void MakeResultFile(string fileName = "result");
    void ShowResult();
    void AddResult(Passenger* p);
    int GetCount();
};

#endif /* MakeResultList_h */
