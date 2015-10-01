//
//  BoundCheckMain.cpp
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "BoundCheck.h"
#include "BoundCheck.cpp"
#include "Point.h"
#include "Point.cpp"

using namespace std;

int main(void)
{
    BoundCheckArray<int> iarr(10);
    
    for(int i=0; i<iarr.GetArrayLen(); i++)
    {
        iarr[i] = (i+1);
    }
    
    for(int i=0; i<iarr.GetArrayLen(); i++)
    {
        cout << iarr[i] << endl;
    }
    
    BoundCheckArray<Point<int>> pointArr(3);
    pointArr[0] = Point<int>(3,4);
    pointArr[1] = Point<int>(5,6);
    pointArr[2] = Point<int>(7,8);
    
}
