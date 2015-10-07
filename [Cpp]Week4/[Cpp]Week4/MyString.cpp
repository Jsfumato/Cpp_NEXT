//
//  MyString.cpp
//  [Cpp]Week4
//
//  Created by Jsfumato on 2015. 10. 6..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "MyString.h"

using namespace std;

int MyString::length() const
{
    return len;
}

MyString& MyString::operator=(const MyString& str)
{
    cout << "[ 대입 연산자 ]" << endl;
    
    delete[] myStr;
    myStr = new char[str.length()+1];
    strcpy(myStr, str.myStr);
    return *this;
};

MyString& MyString::operator+=(const MyString& str)
{
    cout << "[ += 연산자 ]" << endl;
    
    char* tempStr = new char[len + str.length() +1];
    strcpy(tempStr, myStr);
    strcat(tempStr, str.myStr);
    delete[] myStr;
    myStr = tempStr;
    
    return *this;
};

MyString MyString::operator+(const MyString& str) const
{
    cout << "[ + 연산자 ]" << endl;
    
    char* tempStr = new char[len + str.length() +1];
    strcpy(tempStr, myStr);
    strcat(tempStr, str.myStr);
    MyString temp = tempStr;
    
    return temp;
};

bool MyString::operator==(const MyString& str) const
{
    cout << "[ 비교 연산자 ]" << endl;
    return strcmp(myStr, str.myStr);
};



ostream& operator<<(ostream& os, const MyString& str)
{
    os << str.myStr;
    return os;
};

istream& operator>>(istream& is, MyString& str)
{
    char temp[50];
    is >> temp;
    str = MyString(temp);
    return is;
};