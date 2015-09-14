//
//  BankTest.cpp
//  [Cpp]Week1
//
//  Created by Jsfumato on 2015. 9. 14..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include <string>
#include "Account.h"
#include "Bank.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Bank* shinhan = new Bank();
    
    shinhan->CreateAccount("asdf", 1235, 1000);

//    이미 존재하는 계좌번호를 입력하게 되면 생성되지 않는다.
    shinhan->CreateAccount("asf", 1235, 1000);
    shinhan->CreateAccount("qwer", 1231, 1000);
    
    shinhan->SetDeposite(1231, 1010);
    shinhan->SetDeposite(1235, 2020);
    
    shinhan->ShowAllAccount();

    delete shinhan;
//  은행을 delete하게 되면, 은행이 보유하고 있던 계좌들도 delete 됨.
    
    return 0;
}
