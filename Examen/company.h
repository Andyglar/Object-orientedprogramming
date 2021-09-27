/*************************************************************
* File: company.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of Company class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>

class Company{
  protected:
  int Wagon; //ejemplo de un wagon con capacidad mayor a 80
  //wagons Wagons *[20]; para este se necesita la clase principal

  public:
  Company();
  Company(int);
  Company (const Company&);
  int getWagon() const;
  void setWagon(int);

  void almostfull(int);
};

#endif 