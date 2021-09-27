/*************************************************************
* File: company.cpp
* Author: Andrea González Arredondo
* Description: This file contains the           implementation of company class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#include "company.h"

Company::Company()
 : Wagon(80){
}

Company::Company(int w)
 : Wagon(w){
}

Company::Company (const Company &c)
 : Wagon(c.Wagon){
 }

int Company::getWagon() const{
  return Wagon;
}

void Company::setWagon(int w){
  Wagon = w;
}

void Company::almostfull(int){
  for (int i = 0; i > 2; i++){
    if (getWagon() >= 80){
      i++;
    }
  std::cout << i << " número de vagones con cantidad arriba del 80% "; 
  }
}