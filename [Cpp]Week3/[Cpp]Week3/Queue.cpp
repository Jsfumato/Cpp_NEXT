//
//  Queue.cpp
//  [Cpp]Week3
//
//  Created by Jsfumato on 2015. 10. 1..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Queue.h"

using namespace std;

template <class T>
void Queue<T>::Enqueue(const T &item)
{
    if(IsFull())
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    list[rear++] = item;
    rear = rear%size;
    count++;
};

template <class T>
T Queue<T>::Dequeue()
{
    if(IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return NULL;
    }
    T item = list[front];
    list[front++] = NULL;
    front = front%size;
    count--;
    
    return item;
};

template <class T>
bool Queue<T>::IsFull()
{
    return (count == size)? true: false;
};

template <class T>
bool Queue<T>::IsEmpty()
{
    return (count == 0)? true: false;
};