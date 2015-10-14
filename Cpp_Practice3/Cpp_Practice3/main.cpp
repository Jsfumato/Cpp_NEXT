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
#include "Number.h"
#include "SmartPtr.h"
#include "Adder.h"
#include "SortRule.h"
#include "DataStorage.h"

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
    
//    Person p1("jsfumato", 24);
//    Person p2("", 1);
//    
//    p2 = p1;
//    cout << p1 << endl;
//    cout << p2 << endl;
    
//    Number num1(44);
//    int i1 = num1.GetNumber();
//    int i2 = num1->GetNumber();
//    
//    cout << i1 << ", " << i2 << endl;
//    
//    Number* num2 = new Number(444);
//    int i3 = num2.GetNumber();
//    int i4 = num2->GetNumber();
//
//    cout  << ", " << i4 << endl;
    
    
//    SmartPtr smPtr(new Point(4,4));
//    smPtr->ShowData();
//    
//    SmartPtr smPtr2;
//    SmartPtr smPtr3;
//    
//    smPtr2 = smPtr;
//    smPtr3 = smPtr;
//    
//    cout << smPtr.ShowRefCount() << endl;;
//    cout << smPtr2.ShowRefCount() << endl;;
//    cout << smPtr3.ShowRefCount() << endl;;
//    
//    smPtr2->ShowData();
    
    DataStorage ds(10);
    
    ds.AddElement(5);
    ds.AddElement(6);
    ds.AddElement(10);
    ds.AddElement(1);
    ds.AddElement(50);
    
    AscendingSort asc;
    DescendingSort dsc;
    
    ds.SortElement(asc);
    ds.ShowElement();
    ds.SortElement(dsc);
    ds.ShowElement();
    
    return 0;
}
