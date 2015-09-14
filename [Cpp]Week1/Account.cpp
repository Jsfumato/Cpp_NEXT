//
//  Account.cpp
//  [Cpp]Week1
//
//  Created by Jsfumato on 2015. 9. 13..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <iostream>
#include <string>
#include "Account.h"

void Account::Deposite(int money)
{
    mvBalance += money;
    cout << "After Deposite : " << endl;
    ShowBalance();
}

void Account::Withdraw(int money)
{
    mvBalance -= money;
    cout << "After WithDraw : " << endl;
    ShowBalance();
}

void Account::ShowBalance()
{
    cout<< "계좌 번호 " << mvAccountNumber << "의 잔고는 " << mvBalance << "원 입니다." << endl;
    cout << endl;
}

int Account::GetAccountNumber()
{
    return mvAccountNumber;
}

string Account::GetAccountName()
{
    return mvAccountName;
}