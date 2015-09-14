//
//  Bank.h
//  [Cpp]Week1
//
//  Created by Jsfumato on 2015. 9. 13..
//  Copyright (c) 2015년 Jsfumato. All rights reserved.
//

#include "Account.h"
#include <iostream>
#ifndef _Cpp_Week1_Bank_h
#define _Cpp_Week1_Bank_h

class Bank
{
private:
    Account* mvAccountArr[10];
    int     mvIndex;
    
    bool    vCheckSameNumber(int accNum);
    
public:
//    void    CreateAccount(Account *acc);
    void    CreateAccount(string accountName, int accountNumber, int balance);
    void    SetDeposite(int accountNumber, int money);
    void    ShowAllAccount();
    
    Bank()
    {
        std::cout << "[Bank Opened]" << std::endl;
        mvIndex = 0;
    };

    ~Bank()
    {
        for (int i=0; i<mvIndex; i++) {
            delete mvAccountArr[i];
        }
        std::cout << "[Bank Closed]" << std::endl;
    }
};
#endif
