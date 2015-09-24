//
//  Singleton.cpp
//  Cpp_practice
//
//  Created by Jsfumato on 2015. 9. 17..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton* st;
    Singleton(){};
    
public:
    static Singleton* getInstance()
    {
        if(st == NULL){
            st = new Singleton();
        }
        return st;
    }
    void ShowInfo()
    {
        cout << "주소값은 " << this << endl;
    }
};

Singleton* Singleton::st = new Singleton();


//int main()
//{
//    Singleton* instance1 = Singleton::getInstance();
//    Singleton* instance2 = Singleton::getInstance();
//    
////  둘 다 같은 주소값이 반환되도록
//    instance1->ShowInfo();
//    instance2->ShowInfo();
//    
//    return 0;
//}