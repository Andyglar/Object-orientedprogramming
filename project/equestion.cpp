/*************************************************************
* File: equestion.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of     Equestion class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/

#include "equestion.h"

Equestion::Equestion()
 : Level(EQUESTION, 1, "hola", 4, "Estas en los baños de la escuela, y llega tu maestro a hacerte una pregunta, si respondes correctamente te proporcionará dinero, de lo contrario te bajará vida y escudo \n"), enemyName("Maestro Gerardo"){
}

Equestion::Equestion(Type Lt, int co, std::string q, int l, std::string h, std::string en)
: Level(EQUESTION, co, q, l, h), enemyName(en){
}

Equestion::Equestion(const Equestion &E)
: Level(E.Ltype, E.correct, E.question, E.nlevel, E.history), enemyName(E.enemyName){  
}

Equestion::Equestion(const Level &level){
  Level();
}

std::string Equestion::getEnemyName() const{
  std::cout << "Enemigo del nivel = " << enemyName;
  return enemyName;
}

void Equestion::setEnemyName (std::string en){
  enemyName = en;
} 
