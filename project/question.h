/*************************************************************
* File: question.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of         
  Question class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef NORMALQUESTION_H
#define NORMALQUESTION_H
#include <iostream>
#include "level.h"

class NormalQuestion : public Level {

  public:
    NormalQuestion();
    NormalQuestion(Type, int, std::string, int, std::string);
    NormalQuestion(const NormalQuestion&);
    NormalQuestion(const Level&);

};

#endif