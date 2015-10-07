//
//  MyString.h
//  [Cpp]Week4
//
//  Created by Jsfumato on 2015. 10. 6..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef MyString_h
#define MyString_h

#include <iostream>
#include <string>

using namespace std;

class MyString
{
private:
    char* myStr;
    int len;
    
public:
    MyString()
    {
        len = 0;
        myStr = nullptr;
    }
    
    MyString(const char* str)
    {
        len = strlen(str);
        myStr = new char[len+1];
        strcpy(myStr, str);
    }
    
    ~MyString()
    {
        delete[] myStr;
    }
    
    MyString(const MyString& str)
    {
        cout << "[ 깊은 복사 생성자 ]" << endl;
        len = str.length();
        myStr = new char[len+1];
        strcpy(myStr, str.myStr);
    }
    
    int length() const;
    MyString& operator=(const MyString& str);
    MyString& operator+=(const MyString& str);
    MyString operator+(const MyString& str) const;
    bool operator==(const MyString& str) const;
    
    friend ostream& operator<<(ostream& os, const MyString& str);
    friend istream& operator>>(istream& is, MyString& str);
};

#endif /* MyString_h */
