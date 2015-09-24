//
//  Employee.h
//  Cpp_practice_1
//
//  Created by Jsfumato on 2015. 9. 17..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#ifndef __Cpp_practice_1__Employee__
#define __Cpp_practice_1__Employee__

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
protected:
    char name[100];
    int sabun;
    
public:
    int num;
    
    Employee()
    {
        cout << "Employee() called" << endl;
    };
    
    Employee(char* str, int n) :sabun(n)
    {
        strcpy(name, str);
        cout << "Employee(str, n) called" << endl;
    };
    
    virtual ~Employee()
    {
        cout << "Employee 소멸소멸" << endl;
    }
    
    virtual void ShowInfo()
    {
        cout << "=== Employee 정보 ===" << endl;
        cout << "이름 : " << name << endl;
        cout << "사번 : " << sabun << endl;
    }
};

#endif /* defined(__Cpp_practice_1__Employee__) */
