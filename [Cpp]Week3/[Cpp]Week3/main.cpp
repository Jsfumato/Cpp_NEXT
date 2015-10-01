//
//  main.cpp
//  [Cpp]Week3
//
//  Created by Jsfumato on 2015. 10. 1..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
#include "Queue.h"
#include "Queue.cpp"

using namespace std;

int main(int argc, const char * argv[]) {

    Stack<int>* intStack = new Stack<int>(5);
    intStack->Push(10);
    intStack->Push(20);
    intStack->Push(30);
    intStack->Push(40);
    intStack->Push(50);
    intStack->Push(60);
    
    for (int i=0; i<5; i++) {
        cout << "[POP] " << intStack->Pop() <<endl;
    }
    
    Queue<float>* fQueue = new Queue<float>(5);
    fQueue->Enqueue(10.1f);
    fQueue->Enqueue(20.2f);
    fQueue->Enqueue(30.3f);
    fQueue->Enqueue(40.4f);
    fQueue->Enqueue(50.5f);
    fQueue->Enqueue(60.6f);
    
    cout << "[Dequeue] " << fQueue->Dequeue() <<endl;
    
    fQueue->Enqueue(70.7f);
    
    for (int i=0; i<5; i++) {
        cout << "[Dequeue] " << fQueue->Dequeue() <<endl;
    }
    
    delete intStack;
    delete fQueue;
    
    return 0;
}
