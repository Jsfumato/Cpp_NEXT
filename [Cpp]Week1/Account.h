//
//  Account.h
//  [Cpp]Week1
//
//  Created by Jsfumato on 2015. 9. 13..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include <string>
#include <iostream>
#ifndef _Cpp_Week1_Account_h
#define _Cpp_Week1_Account_h

using namespace std;

class Account
{
private:
    string  mvAccountName;
    int     mvAccountNumber;
    int     mvBalance;
    
public:
    void    Deposite(int money);
    void    Withdraw(int money);
    void    ShowBalance();
    
    int     GetAccountNumber();
    string  GetAccountName();
    
    Account(string accountName, int accountNumber, int balance)
    {
        mvAccountName = accountName;
        mvAccountNumber = accountNumber;
        mvBalance = balance;
        cout << "[Created] : " << mvAccountName << ", " << mvAccountNumber << endl;
    }
    ~Account()
    {
        cout << "[Deleted] : " << mvAccountName << ", " << mvAccountNumber << endl;
    }
};

#endif
