//
//  main.cpp
//  Cpp_Practice2
//
//  Created by Jsfumato on 2015. 9. 25..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include "Diamond.h"

template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

template <>
char* Add( char* str1, char* str2 )
{
    strcat(str1, ", ");
    strcat(str1, str2);
    return str1;
}

//
//int main(int argc, const char * argv[]) {
//    
////    Base* b = new Base();
////    FatherOne* fo = new FatherOne();
////    FatherTwo* ft = new FatherTwo();
////    Child* c = new Child();
//    
////    c->func();
//    
//    char str1[100] = "Hello";
//    char str2[100] = "World";
//    cout << Add<int>(3,5) << endl;
//    cout << Add<double>(3.3,9.523) << endl;
//    cout << Add<char*>(str1, str2) << endl;
//    
//    return 0;
//}
