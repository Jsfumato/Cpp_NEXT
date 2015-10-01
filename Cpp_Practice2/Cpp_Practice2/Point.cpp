//
//  Point.cpp
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Point.h"

using namespace std;

template <class T>
Point<T>::Point(T x, T y):xPos(x),yPos(y){}
//template은 구현 코드에 이니셜라이져를 써야한다.

template <class T>
void Point<T>::ShowPosition() const
{
    cout << "[" << xPos << ", " << yPos << "]" << endl;
}
