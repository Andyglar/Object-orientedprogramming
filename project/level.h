 /*************************************************************
* File: level.h
* Author: Andrea González Arredondo
* Description: This file contains the definition of      
  Level class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#ifndef level_h
#define level_h
#include <iostream>
#include <string>
#include <sstream>

typedef enum {LEVEL, EQUESTION, QUESTION} Type;

class Level{
  //métodos que se van a heredar 
  protected:
  Type Ltype; //tipo de nivel
  int correct; //Respuesta correcta
  std::string question; //Pregunta a hacer
  int nlevel; //número de nivel
  std::string history;


  public:
  Level();
  Level(Type, int, std::string, int, std::string); //constructor de mi secretdoor para el arreglo de niveles
  Level(const Level&);

  Type getLtype() const;
  int getCorrect() const;
  int getLevel() const;
  std::string getHistory() const;
  std::string getQuestion() const;


  void setLtype(Type);
  void setCorrect(int);
  void setQuestion(std::string);
  void setLevel(int);
  void setHistory(std::string);

  void chooseOption();
};

#endif
