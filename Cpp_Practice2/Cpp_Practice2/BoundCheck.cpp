//
//  BoundCheck.cpp
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "BoundCheck.h"

using namespace std;

//T* arr;
//int arrlen;

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len):arrlen(len)
{
    arr = new T[len];
    cout << "생성" << endl;
};

template <class T>
T& BoundCheckArray<T>::operator[](int idx)
{
    if(idx < 0 || idx >= arrlen){
        cout<<"Array Index Out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
};

template <class T>
T BoundCheckArray<T>::operator[](int idx) const
{
    if(idx < 0 || idx >= arrlen){
        cout<<"Array Index Out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
};

template <class T>
int BoundCheckArray<T>::GetArrayLen() const
{
    return arrlen;
};

template <class T>
BoundCheckArray<T>::~BoundCheckArray()
{
    delete arr;
    cout << "해제" << endl;
};