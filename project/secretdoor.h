/*************************************************************
* File: secretdoor.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of
  secretdoor class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#ifndef secretdoor_h
#define secretdoor_h
#include <iostream>
#include <string>
#include <sstream>
#include "level.h"
#include "student.h"
#include "store.h"
#include "question.h"
#include "equestion.h"


class Secretdoor {
  private:
  int currentlevel;
  Student *student; 
  Level *levels[6];
  
  public:
  Secretdoor();
  Secretdoor(int); 
  Secretdoor(const Secretdoor&);


  //get
  int getCurrentLevel() const;
  //set
  void setCurrentLevel(int);
  //métodos de clase
  void startGame()const;
  void nextLevel()const;
  void endGame()const;
  bool resolveLevel(Student *student);
  bool resolveBasicLevel(Student *student);
  bool resolveEquestion(Student *student);
  bool resolveQuestion(Student *student);
  //método para concatenar
  std::string toString() const;

};

#endif