/*************************************************************
* File: student.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of         
  Student class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#ifndef student_h
#define student_h
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>


class Student {
  private:
    int life;
    int money;
    int shield;
    std::string name;
    int score;
  
  public:
  Student();
  Student(int, int, int, std::string, int);
  Student(const Student&);
  
  int getLife() const;
  int getMoney() const;
  int getShield() const;
  int getScore() const;
  std::string getName() const;

  void setLife(int);
  void setMoney(int);
  void setShield(int);
  void setScore(int);
  void setName(std::string);

  void increaseMoney();
  void decreaseMoney();
  void decreaseLife();
  void increaseScore();
  void decreaseScore();
  void increaseShield();
  void decreaseShield();

  std::string toString() const;
};

#endif