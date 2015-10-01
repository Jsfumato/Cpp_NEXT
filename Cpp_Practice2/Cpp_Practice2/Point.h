//
//  Point.h
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Point_h
#define Point_h

template <class T>
class Point
{
private:
    T xPos, yPos;

public:
    Point(T x=0, T y=0);
    
    void ShowPosition() const;
};



#endif /* Point_h */
