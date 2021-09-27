/*************************************************************
* File: account.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of Account class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account {
  protected:
    float balance;
    float interestRate;

  public:
    Account();
    Account(float, float);
    Account (const Account&);


    void withdraw(float amount);
    void deposit(float amount);
    float getBalance() const;
    virtual float earnInterest();
};

#endif