//
//  MakeResultList.cpp
//  [Cpp]Train_
//
//  Created by Jsfumato on 2015. 10. 14..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "MakeResultList.h"

void MakeResultList::MakeResultFile(string fileName)
{
    string src = fileSrc + fileName + ".csv";
    
    ofstream outFile(src);

    outFile.write("아이디,이름,부스도착,매표소요,출발역,도착역,이동소요,매표대기,열차대기,열차출발,도착시간\n", 100);
    for (int i=0; i<resultQueue->GetCount(); i++)
    {
        outFile.write(resultQueue->Get(i)->GetResultData().c_str(), 100);
    }
    cout << src << endl;
    cout << "파일 생성 완료" << endl;
}

void MakeResultList::ShowResult(){
    cout << "============= 결과 목록 =============" << endl;
    cout << "[아이디]\t[이름]\t[부스도착]\t[매표소요]\t[이동소요]\t[매표대기]\t[열차대기]\t[열차출발]\t[도착시간]" << endl;
    
    for(int i=0; i<resultQueue->GetCount(); i++)
    {
        resultQueue->Get(i)->ShowInfo();
        cout << resultQueue->Get(i)->GetTicketingReady() <<"\t";
        cout << resultQueue->Get(i)->GetTrainReady() <<"\t";
        cout << resultQueue->Get(i)->GetLeaveTime() <<"\t";
        cout << resultQueue->Get(i)->GetFinalTime()  <<"\t" <<endl;
    }
}

void MakeResultList::AddResult(Passenger* p)
{
    resultQueue->Enqueue(p);
}

int MakeResultList::GetCount()
{
    return resultQueue->GetCount();
}
