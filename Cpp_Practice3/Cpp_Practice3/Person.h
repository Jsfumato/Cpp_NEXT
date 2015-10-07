//
//  Person.h
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 2..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <cstring>

class Person
{
private:
    char*   name;
    int     age;
    
public:
    Person(char* iname, int iage):age(iage)
    {
        int len = (int)strlen(iname) +1;
        name = new char[len];
        strcpy(name, iname);
    }
    
    Person(Person& p)
    {
        int len = (int)strlen(p.name) +1;
        name = new char[len];
        strcpy(name, p.name);
    }
    
    ~Person()
    {
        delete[] name;
        cout << "[del] Person : " << name << endl;
    }
    
    Person& operator=(const Person& p)
    {
        delete[] name;
        
        int len = (int)strlen(p.name) +1;
        name = new char[len];
        strcpy(name, p.name);
        age = p.age;
        
        return *this;
    }
    
    friend ostream& operator<<(ostream& os, Person& p);
};

ostream& operator<<(ostream& os, Person& p)
{
    cout << "[" <<p.name<<"] : " << p.age;
    return os;
}

#endif /* Person_h */
