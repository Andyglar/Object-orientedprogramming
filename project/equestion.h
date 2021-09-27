/*************************************************************
* File: equestion.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of     Equestion class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#ifndef EQUESTION_H
#define EQUESTION_H
#include <iostream>
#include <string>
#include "level.h"
#include <sstream>

class Equestion : public Level{
  private:
    std::string enemyName;

  public:
    Equestion();
    Equestion(Type, int, std::string, int, std::string, std::string);
    Equestion(const Equestion&);
    Equestion(const Level&);

    std::string getEnemyName() const;
  
    void setEnemyName(std::string); 
};

#endif
