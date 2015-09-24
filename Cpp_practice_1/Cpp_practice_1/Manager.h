//
//  Manager.h
//  Cpp_practice_1
//
//  Created by Jsfumato on 2015. 9. 17..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#ifndef __Cpp_practice_1__Manager__
#define __Cpp_practice_1__Manager__

#include <stdio.h>
#include <iostream>
#include <cstring>
#include "Employee.h"

using namespace std;

//상속은 public, protected, private으로 받을 수 있다.
//protected로 받으면, 상위 클래스 중 접근범위가 protected 이상인 멤버를 protected로 받는다.(public, protected -> protected)
//private으로 받으면, 마찬가지로, 다 private으로 만든당...


class Manager : public Employee
{
private:
    char* department;
    
public:
    
    Manager()
    {
        cout << "Manager() called" << endl;
    }
    
    Manager(char* dept, char* name, int number) : Employee(name, number)
    {
        int len = strlen(dept) +1;
        department = new char[len];
        strcpy(department, dept);
        cout << "Manager() called" << endl;
    }

    ~Manager()
    {
        delete department;
        cout << "Manager 소멸소멸" << endl;
    }
    
    void ShowInfo()
    {
        cout << "=== Manager 정보 ===" << endl;
        cout << "이름 : " << name << endl;
        cout << "사번 : " << sabun << endl;
    }
    
};
#endif /* defined(__Cpp_practice_1__Manager__) */
