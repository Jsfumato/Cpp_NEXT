//
//  main.cpp
//  Cpp_practice_1
//
//  Created by Jsfumato on 2015. 9. 17..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "Employee.h"
#include "Manager.h"

using namespace std;

int main(int argc, const char * argv[]) {

    Employee* e = new Manager("개발부", "이름이", 14142);

//    Manager m("부서부서", "이름이요", 100);
//    m.ShowInfo();
    
//    e = m;
    e->ShowInfo();
    
    delete e;
    return 0;
}
