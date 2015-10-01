//
//  Diamond.h
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Diamond_h
#define Diamond_h
#include <iostream>

using namespace std;

class Base
{
protected:
    int i;
    
public:
    Base() : i(10)
    {
        cout << "Base()" << endl;
    }
    
    void func()
    {
        cout << "Base Func()" << endl;
    }
};

class FatherOne : virtual public Base
{
private:
    
public:
    FatherOne()
    {
        cout << "FatherOne()" << endl;
        i += 1;
    }
    void func()
    {
        cout << "Father One Func()" << endl;
    }
};

class FatherTwo : virtual public Base
{
private:
    
public:
    FatherTwo()
    {
        cout << "FatherTwo()" << endl;
        i += 2;
    }
    void func()
    {
        cout << "Father Two Func()" << endl;
    }
};

class Child : public FatherOne, public FatherTwo
{
private:
    
public:
    Child()
    {
        cout << "Child()" << endl;
    }
    void func()
    {
        cout << i << endl;
    }
};





#endif /* Diamond_h */
