/*************************************************************
* File: account.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of Account class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#include "account.h"

Account::Account()
  : balance(0), interestRate(0){
}
Account::Account(float b, float ir)
  : balance(b), interestRate(ir){
}

Account::Account (const Account &A)
 : balance(A.balance), interestRate(A.interestRate){
}

void Account::withdraw(float amount){

}
void Account::deposit(float amount){
}
float Account::getBalance() const{
  return balance;
}

float Account::earnInterest() {
}
