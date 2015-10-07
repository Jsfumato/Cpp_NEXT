//
//  main.cpp
//  Cpp_Practice3
//
//  Created by Jsfumato on 2015. 10. 2..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include "Point.h"
#include "Person.h"

using namespace std;

int main(int argc, const char * argv[]) {

//    Point p1(3, 5);
//    Point p2(5, 7);
//    Point p3 = p1.operator+(p2);
//    Point p4 = operator+(p1, p2);
//    
//    p1.ShowData();
//    p2.ShowData();
//    p3.ShowData();
//    p4.ShowData();
//    
//    ++p1;
//    
//    p1.ShowData();
//    
//    Point p5 = p1++;
//    p5.ShowData();
//    p1.ShowData();
//    
//    cout << p1;
//    
//    Point p6;
//    cout << p6;
//    
//    p6 = p1;
//    cout << p6;
    
    Person p1("jsfumato", 24);
    Person p2("", 1);
    
    p2 = p1;
    cout << p1 << endl;
    cout << p2 << endl;
    
    return 0;
}
