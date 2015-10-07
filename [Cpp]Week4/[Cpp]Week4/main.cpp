//
//  main.cpp
//  [Cpp]Week4
//
//  Created by Jsfumato on 2015. 10. 6..
//  Copyright © 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include "MyString.h"

using namespace std;

int main(int argc, const char * argv[]) {

    MyString mStr("asdf");
    cout << "[mStr] " << mStr << endl;
    
    MyString nStr = "fdsa";
    cout << "[nStr] " << nStr << endl;
    
    cout << boolalpha;
    cout << (mStr == nStr) << "\n" << endl;
    
    mStr += nStr;
    cout << "[mStr] " << mStr << "\n" << endl;

    MyString plusStr = mStr + nStr;
    cout << "[plusStr] " << plusStr << "\n" << endl;

    MyString plusStr1 = "";
    plusStr1 = mStr + nStr;
    cout << "[plusStr1] " << plusStr1 << "\n" << endl;
    
    MyString plusStr2 = plusStr;
    cout << "[plusStr2] " << plusStr2 << "\n" << endl;
    
    MyString inStr = "";
    cout << "inStr에 넣을 문자열 입력!" << endl;
    cin >> inStr;
    cout << inStr << endl;
    
//    MyString* nStr = new MyString("fdsa");
//    mStr = nStr;
//    cout << mStr << endl;
    
//    delete nStr;
//    cout << mStr << endl;
    
    return 0;
}
