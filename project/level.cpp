
/*************************************************************
* File: level.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of     level class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "level.h"
#include "secretdoor.h"

//Constructores

Level::Level()
 : Ltype (LEVEL), correct(2), question("Área de un cuadrado de 5 cm"), nlevel(1), history ("Estas en la cafetería de la escuela, es tu primera prueba, en este nivel te encontrarás con la señora que hace la limpieza, puede que te ataque.... ") {
}

Level::Level(Type Lt, int co, std::string q, int l, std::string h)
 : Ltype(Lt), correct(co), question(q),  nlevel(l), history(h){
}

Level::Level(const Level &level)
 : Ltype(level.Ltype), correct(level.correct), nlevel(level.nlevel), question(level.question), history(level.history){  
}

Type Level::getLtype() const{
  return Ltype;
}

int Level::getCorrect() const{
  return correct;
}

int Level::getLevel() const{
  return nlevel;
}

std::string Level::getHistory() const{
  return history;
} 

std::string Level::getQuestion() const{
  return question;
}

void Level::setLtype(Type Lt){
  Ltype = Lt;
}

void Level::setCorrect(int co){
  correct = co;
}

void Level::setQuestion(std::string q){
  question = q;
}

void Level::setLevel(int l){
  nlevel = l;
}

void Level::setHistory(std::string h){
  history = h;
}

void Level::chooseOption(){
  std::cout << "De las opciones de respuesta que te son proporcionadas, elige la correcta \n";
}

