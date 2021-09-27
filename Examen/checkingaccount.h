/*************************************************************
* File: checkingaccount.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of Account class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"

class CheckingAccount : public Account{
  protected:
    float fee;
    float minimumBalance;
  
  public:
    CheckingAccount();
    CheckingAccount(float, float, float, float);
    CheckingAccount(const CheckingAccount&);

    float getFee() const;
    float getMinimumBalance() const;

};

#endif