//
//  Stack.h
//  [Cpp]Week3
//
//  Created by Jsfumato on 2015. 10. 1..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T* list;
    int size;
    int top;
    
public:
    Stack(int num = 10):size(num),top(-1),list(new T[num])
    {
        for(int i=0; i<size; i++)
        {
            list[i] = NULL;
        }
    };
    ~Stack()
    {
        delete list;
    };
    
    void Push(const T &item);
    T Pop();
    bool IsFull();
    bool IsEmpty();
};

#endif /* Stack_h */
