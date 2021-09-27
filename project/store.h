/*************************************************************
* File: store.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of      
  Store class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef store_h
#define store_h
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class Store {
  private:
    int cost;
    int shieldc;
  
  public:
  Store();
  Store(int, int);
  Store(const Store&);
  
  int getShieldc() const;
  int getCost() const;

  void setShieldc(int);
  void setCost(int);

  void CheckShieldCost();
  void BuyShield ();
  std::string toString() const;
  
};

#endif