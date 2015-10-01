//
//  Stack.cpp
//  [Cpp]Week3
//
//  Created by Jsfumato on 2015. 10. 1..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Stack.h"

using namespace std;

template <class T>
void Stack<T>::Push(const T &item)
{
    if(IsFull())
    {
        cout<<"Stack is Full"<<endl;
        return;
    }
    list[++top] = item;
};

template <class T>
T Stack<T>::Pop()
{
    if(IsEmpty())
    {
        cout<<"Stack is Empty"<<endl;
        return NULL;
    }
    T item = list[top];
    list[top--] = NULL;

    return item;
};

template <class T>
bool Stack<T>::IsFull()
{
    return (top == size -1)? true: false;
};

template <class T>
bool Stack<T>::IsEmpty()
{
    return (top == -1)? true: false;
};