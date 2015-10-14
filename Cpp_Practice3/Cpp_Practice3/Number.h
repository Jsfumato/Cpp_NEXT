//
//  Number.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 8..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Number_h
#define Number_h

#include <iostream>

using namespace std;

class Number
{
private:
    int num;
    
public:
    Number(int n) :num(n)
    {}
    
    Number* operator->()
    {
        cout << "[ -> 오버로딩 ]" << endl;
        return this;
    }
    
    Number& operator*()
    {
        cout << "[ * 오버로딩 ]" << endl;
        return *this;
    }
    
    int GetNumber() const
    {
        return num;
    }
};

#endif /* Number_h */
