/*************************************************************
* File: question.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of         
  question class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "question.h"
#include <cstdlib>
#include <ctime>

NormalQuestion::NormalQuestion()
 : Level(QUESTION, 1, "Área de un cuadrado que mide 5cm de lado", 4, "Estas en los baños de la escuela, y llega tu maestro a hacerte una pregunta, si respondes correctamente te proporcionará dinero, de lo contrario te bajará vida y escudo \n"){
}

NormalQuestion::NormalQuestion(Type Lt, int co, std::string q, int l, std::string h)
 : Level(QUESTION, co, q, l, h){
}
 
//correct, question, nlevel, history, id del nivel
NormalQuestion::NormalQuestion(const NormalQuestion &nq)
 : Level(nq.Ltype, nq.correct, nq.question, nq.nlevel, nq.history){
}

NormalQuestion::NormalQuestion(const Level &level){
  Level();
}

