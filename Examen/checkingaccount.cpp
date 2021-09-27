/*************************************************************
* File: CheckingAccount.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of CheckingAccount class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "checkingaccount.h"

CheckingAccount::CheckingAccount()
  : Account (0, 0), fee(0), minimumBalance(0){
}

CheckingAccount::CheckingAccount(float b, float ir, float f, float mb)
  : Account (b, ir), fee(f), minimumBalance(mb){
}
CheckingAccount::CheckingAccount(const CheckingAccount &c)
 : Account (c.balance, c.interestRate), fee(c.fee), minimumBalance(c.minimumBalance){
 }

float CheckingAccount::getFee() const{
  return fee;
}
float CheckingAccount::getMinimumBalance() const{
  return minimumBalance;
}
