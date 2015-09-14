//
//  Bank.cpp
//  [Cpp]Week1
//
//  Created by Jsfumato on 2015. 9. 13..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include "Bank.h"
#include <iostream>

void Bank::CreateAccount(string accountName, int accountNumber, int balance)
{
    if(vCheckSameNumber(accountNumber))
    {
        cout << "[invalid number] : 이미 존재하는 계좌번호입니다." << endl;
        cout << endl;
        return;
    }
    
    Account *acc = new Account(accountName, accountNumber, balance);
    cout << "current index : " << mvIndex << endl;
    cout << endl;
    mvAccountArr[mvIndex] = acc;
    mvIndex++;
}

//    함수를 가지고 특정 account 에 대한 입금을 할 수 있습니다.
void Bank::SetDeposite(int accountNumber, int money)
{
    for (int i=0; i<mvIndex; i++) {
        if (mvAccountArr[i]->GetAccountNumber() == accountNumber)
        {
            mvAccountArr[i]->Deposite(money);
        }
    }
}

//    함수에서는 이미 가지고 있는 모든 Account를 보여주게 됩니다.
void Bank::ShowAllAccount()
{
    cout << "======= 현재 은행에 저장된 계좌 =======" << endl;
    for (int i=0; i<mvIndex; i++) {
        
        cout << endl;
        cout << "저장된 index : " << i << endl;
        cout << "계좌 이름 : " << mvAccountArr[i]->GetAccountName() << endl;
        cout << "계좌 번호 : " << mvAccountArr[i]->GetAccountNumber() << endl;
        mvAccountArr[i]->ShowBalance();
        cout << "=================================" << endl;
    }
}

bool Bank::vCheckSameNumber(int accNum)
{
    for (int i=0; i<mvIndex; i++) {
        if(mvAccountArr[i]->GetAccountNumber() == accNum)
        {
            return true;
        }
    }
    return false;
}