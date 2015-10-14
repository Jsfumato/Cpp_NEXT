//
//  Adder.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 8..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Adder_h
#define Adder_h
#include "Point.h"

class Adder
{
private:
    
public:
    
    static int adder(const int& a, const int& b)
    {
        return a + b;
    }

    static double adder(const double& a, const double& b)
    {
        return a + b;
    }
    
//    Point& operator()(const Point& p1, const Point& p2)
//    {
//        Point p;
//        p.xPos = p1.xPos + p2.xPos;
//        p.yPos = p1.yPos + p2.yPos;
//        return p;
//    }
    
};
#endif /* Adder_h */
