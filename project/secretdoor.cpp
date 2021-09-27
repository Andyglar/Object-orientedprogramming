/*************************************************************
* File: secretdoor.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation  of         
               Secretdoor class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
//secretdoor original
#include "secretdoor.h"


Secretdoor::Secretdoor()
 : currentlevel(0){
  Equestion *equestion;
  levels[0] = new NormalQuestion (QUESTION, 1,  "Area de un círculo de radio 3", 1, "En tu primer nivel, te encuentras en la cafetería, no hay nadie, solo están las mesas y las sillas, por lo que te sientes con miedo, por saber que va a pasar, de pronto a tu derecha encuentras un cartel que tiene algo escrito ");
  levels [1] =  new NormalQuestion (QUESTION, 2, "Tu mamá fue al súper y compró 53 focos ahorradores para tu casa, fue un total de 4589 pesos, perdió el ticket de compra, por lo que te pidió que calcules el costo de cada foco, para poder saber si le dieron bien el cambio ", 1, "Después de que pasaste por la cafetería, a tu derecha se abrió una puerta que te llevo directamente al salón de audiovisual, donde encontraste una nota con un problema escrito que dice...."); 
  levels [2] = new NormalQuestion (QUESTION, 2, "Suma de quebrados de 5/8 + 9/6 ", 1, "Ahora estas en el nivel 3, caminas en dirección este, hasta llegar a la puerta de la capilla de tu escuela, entrando ves un libro abierto, donde está escrito tu siguiente desafío matemático");
  levels [3] =  new Equestion (EQUESTION, 3, "¿Cuál es el resultado de multiplicar 38 * 450? ", 1, "Llega tu maestro a hacerte una pregunta, si respondes correctamente te proporcionará dinero, de lo contrario te bajará vida y escudo", "Maestro panfilo");
  levels [4] = new Equestion (EQUESTION, 1, "Cuál es el perimetro y área de la cancha de futbol, si tiene 120 m de largo y 60 de ancho", 1, "Ahora caminas en dirección norte, hasta llegar a la cancha de futbol donde se aparece tu maestro de eduación física y te pregunta", "Maestro Diego");
  levels [5] =  new Equestion (EQUESTION, 2, "Primero suma los siguientes numeros: 459 + 685 + 789 + 931 + 654 + 951 + 753 + 625 + 745 + 986 + 124 + 325 + 648  \n Después de sumarlos, la respuesta la multiplicas por 57 \n Cuando tengas ya esa respuesta, lo que te slaga lo divides entre 114, ¿Cuál es el resultado final? ", 1, "El profesor de educación física te pidió que te dirigieras a la dirección y que ahí te encontrarías con tu último enemigo, llegando a la dirección, está tu directora parada con un pizarrón en la mano, que tiene una serie de sumas, multiplicaciones y restas", "Directora María");
}


Secretdoor::Secretdoor( int Cl)
 : currentlevel(Cl){
  Equestion *equestion;
  levels[0] = new NormalQuestion (QUESTION, 1,  "Area de un círculo de radio 3", 1, "En tu primer nivel, te encuentras en la cafetería, no hay nadie, solo están las mesas y las sillas, por lo que te sientes con miedo, por saber que va a pasar, de pronto a tu derecha encuentras un cartel que tiene algo escrito ");
  levels [1] =  new NormalQuestion (QUESTION, 2, "Tu mamá fue al súper y compró 53 focos ahorradores para tu casa, fue un total de 4589 pesos, perdió el ticket de compra, por lo que te pidió que calcules el costo de cada foco, para poder saber si le dieron bien el cambio ", 1, "Después de que pasaste por la cafetería, a tu derecha se abrió una puerta que te llevo directamente al salón de audiovisual, donde encontraste una nota con un problema escrito que dice...."); 
  levels [2] = new NormalQuestion (QUESTION, 2, "Suma de quebrados de 5/8 + 9/6 ", 1, "Ahora estas en el nivel 3, caminas en dirección este, hasta llegar a la puerta de la capilla de tu escuela, entrando ves un libro abierto, donde está escrito tu siguiente desafío matemático");
  levels [3] =  new Equestion (EQUESTION, 3, "¿Cuál es el resultado de multiplicar 38 * 450? ", 1, "Llega tu maestro a hacerte una pregunta, si respondes correctamente te proporcionará dinero, de lo contrario te bajará vida y escudo", "Maestro panfilo");
  levels [4] = new Equestion (EQUESTION, 3, "Cuál es el perimetro y área de la cancha de futbol, si tiene 120 m de largo y 60 de ancho", 1, "Ahora caminas en dirección norte, hasta llegar a la cancha de futbol donde se aparece tu maestro de eduación física", "Maestro Diego");
  levels [5] =  new Equestion (EQUESTION, 3, "Primero suma los siguientes numeros: 459 + 685 + 789 + 931 + 654 + 951 + 753 + 625 + 745 + 986 + 124 + 325 + 648  \n Después de sumarlos, la respuesta la multiplicas por 57 \n Cuando tengas ya esa respuesta, lo que te slaga lo divides entre 114, ¿Cuál es el resultado final? ", 1, "El profesor de educación física te pidió que te fueras a la dirección y que ahí te encontrarías con tu último enemigo, llegando a la dirección, está tu directora parada con un pizarrón en la mano, que tiene una serie de sumas, multiplicaciones y restas", "Directora María");
}


Secretdoor::Secretdoor(const Secretdoor &secretdoor)
 : currentlevel(secretdoor.currentlevel){
  student = new Student (100, 0, 0, student->getName(), 0);
    for (int  i = 0; i < 6; i ++){
      if (secretdoor.levels[i]->getLtype() == LEVEL){
        levels[i] = new Level(*secretdoor.levels[i]);
      } 
      else if (secretdoor.levels[i]->getLtype() == EQUESTION) {
        levels[i] = new Equestion (*secretdoor.levels[i]);
      }
      else if(secretdoor.levels[i]->getLtype() == QUESTION){
        levels[i] = new NormalQuestion (*secretdoor.levels[i]);

      } 
    }
}
 //PONER EL TYPE

int Secretdoor::getCurrentLevel() const{ 
  return currentlevel;
}

void Secretdoor::setCurrentLevel(int Cl){
  currentlevel = Cl;
}

std::string Secretdoor::toString() const {
  std::stringstream aux;   //Forma de concatenar en un arreglo
  
  aux << "Bienvenido, espero que estés listo para empezar tu aventura, actualmente te encuentras en el nivel =" << " " << currentlevel << std::endl; //preguntar como puede actualizar por cada vez que cambie de nivel
  return aux.str();
}

void Secretdoor::startGame() const{
  int j;
  std::cout << "¿Estás listo para comenzar?, de 1 al 10, que tan listo estás, ponlo a continuación \n";
  std::cin >> j;
  if (j <= 10 && j >= 1){
    std::cout << "Con todos los conocimientos de tus clases de matemáticas podrás regresar a la normalidad, confía en ti \n";
  }
  else {
    std::cout << "Te quedarás aquí para siempre....";
  }
}

void Secretdoor::nextLevel() const{
  std::cout << "Ahora estás en el siguiente nivel, ¿Listo para las nuevas preguntas? \n";
}

void Secretdoor::endGame() const{
  std::cout << "Tienes que terminar el juego para poder regresar a la normalidad \n";
}


bool Secretdoor::resolveLevel(Student *student){
  if (levels[currentlevel]->getLtype() == LEVEL){
    return resolveBasicLevel(student);
  }
  else if (levels[currentlevel]->getLtype() == EQUESTION){
    return resolveEquestion(student);
  }
  else if (levels[currentlevel]->getLtype() == QUESTION){
    return resolveQuestion(student);
  }
}

bool Secretdoor::resolveBasicLevel(Student *student){
}


bool Secretdoor::resolveQuestion(Student *student){
  //variables y objetos a utilizar
  int c;
  Level *a;
  Store b;
  NormalQuestion nq;
  Type QUESTION;
  //Como se contestará cada pregunta
  levels[0]->getLtype();
  levels[1]->getLtype();
  levels[2]->getLtype();
  std::cout << student->toString();
  startGame(); //secretdoor
  std::cout << "\n";
  std::cout << toString(); //secretdoor
  std::cout << "\n";
  std::cout << levels[0]->getHistory();
  std::cout << "\n";
  std::cout << "El cartel dice: \n";
  std::cout << levels[0]->getQuestion();
  std::cout << "\n\n";
  std::cout <<  "Opción 1= 28.27  Opción 2 = 9  Opción 3 = 27.89 \n";
  a->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> c;
  if (levels[0]->getCorrect() == c ){
        std::cout << "Respuesta correcta \n";
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual:  ";
    std::cout << student->getScore();
    std::cout << "\n";
    std::cout << "Dinero actual: " << student->getMoney() << " monedas \n \n";
  } else {
    std::cout << "Respuesta incorrecta " << "\n";
     while (student->getScore() != 0){
        student->decreaseScore();
        std::cout << "El puntaje que te queda es: " << student->getScore() << "\n \n";
        break;
      } 
  }

  std::cout << levels[1]->getHistory();
  std::cout << "\n";
  std::cout << "La nota dice: \n";
  std::cout << levels[1]->getQuestion();
  std::cout << "\n\n";
  std::cout << "Opción 1 = 92.50  Opción 2 = 86.58  Opción 3 = 90.89";
  std::cout << "\n";
  a->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> c;
  if (levels[1]->getCorrect() == c ){
        std::cout << "Respuesta correcta \n";
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual:  ";
    std::cout << student->getScore();
    std::cout << "\n";
    std::cout << "Dinero actual: " << student->getMoney() << " monedas \n \n";
  } else {
    std::cout << "Respuesta incorrecta " << "\n";
     while (student->getScore() != 0){
        student->decreaseScore();
        std::cout << "El puntaje que te queda es: " << student->getScore() << "\n \n";
        break;
      } 
  } 


  std::cout << levels[2]->getHistory();
  std::cout << "\n";
  std::cout << "El problema del libro dice: \n";
  std::cout << levels[2]->getQuestion();
  std::cout << "\n\n";
  std::cout << "Opción 1 = 16/9  Opción 2 = 17/8  Opción 3 = 9/12";
  std::cout << "\n";
  a->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> c;
  if (levels[2]->getCorrect() == c ){
        std::cout << "Respuesta correcta \n";
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual:  ";
    std::cout << student->getScore();
    std::cout << "\n";
    std::cout << "Dinero actual " << student->getMoney() << " monedas \n \n";
  } else {
    std::cout << "Respuesta incorrecta " << "\n";
     while (student->getScore() != 0){
        student->decreaseScore();
        std::cout << "El puntaje que te queda es: " << student->getScore() << "\n \n";
        break;
      } 

    }
  std::cout << "Estás a la mitad del juego, tendrás oportunidad de comprar escudo, ya que en los próximos niveles te enfrenatarás a tus maestros, que te podrán diferentes preguntas matemáticas, cada vez serán más difíciles.... \n";
  std::cout << b.toString() << "\n" ;
  b.CheckShieldCost();
  if (student->getMoney() >= 100){
      b.BuyShield();
      student->increaseShield();
      student->decreaseMoney();
      std::cout << "Escudo actual = " << student ->getShield() << "\n \n"; 
  } else {
    std::cout << "No tienes dinero suficiente para comprar en al tienda, así que tendrás que seguir sin escudo \n \n";
  }
}
 

bool Secretdoor::resolveEquestion(Student *student){
  int co;
  Level *l;
  Type EQUESTION;
  //Niveles dependiendo del tipo
  levels[3]->getLtype();
  levels[4]->getLtype();
  levels[5]->getLtype();
  //creando un nuevo estudiante con los datos anteriores

  std::cout << "\n";
  std::cout << levels[3]->getHistory();
  std::cout << "\n";
  std::cout << "El maestro comienza a hablar y te pregunta: \n";
  std::cout << levels[3]->getQuestion();
  std::cout << "\n\n";
  std::cout << "Opción 1 = 15,600  Opción 2 = 17,500  Opción 3 = 17,100";
  std::cout << "\n";
  l->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> co;
  if (levels[3]->getCorrect() == co ){
    std::cout << "Respuesta correcta \n";
    //error en llamar métodos, para aumentar o disminuir el dinero, y lo demás
    //marca un segmetation fault
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual = " << student->getScore() << "\n";
    std::cout << "Dinero actual = " << student->getMoney() << "\n";
  } 
  else { //falta disminuir puntaje
    std::cout << "Respuesta incorrecta :( \n";
    if (student->getShield() != 0){
        student->decreaseShield();
        std::cout << "Escudo actual = " << student->getShield() << "\n";
    } else{
        student->decreaseLife();
        std::cout << "Vida actual = " << student->getLife() << "\n";
    }
  }

  std::cout << "\n";
  std::cout << "Enemigo del nivel = Maestro Diego";
  std::cout << "\n";
  std::cout << levels[4]->getHistory();
  std::cout << "\n";
  std::cout << "El maestro comienza a hablar y te pregunta: \n";
  std::cout << levels[4]->getQuestion();
  std::cout << "\n\n";
  std::cout << "Opción 1 = Área (7200 m2)  Perímetro (360 m) \n  Opción 2 = Área (6800 m2)  Perímetro (360 m) \n Opción 3 = Área (7200 m2)  Perímemtro (280 m)";
  std::cout << "\n";
  l->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> co;
  if (levels[4]->getCorrect() == co ){
     std::cout << "Respuesta correcta \n";
    //error en llamar métodos, para aumentar o disminuir el dinero, y lo demás
    //marca un segmetation fault
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual = " << student->getScore() << "\n";
    std::cout << "Dinero actual = " << student->getMoney() << "\n";
  } 
  else {
    std::cout << "Respuesta incorrecta :( \n";
    if (student->getShield() != 0){
        student->decreaseShield();
        std::cout << "Escudo actual = " << student->getShield() << "\n";
    } else{
        student->decreaseLife();
        std::cout << "Vida actual = " << student->getLife() << "\n";
    }
  }

  std::cout << "\n";
  std::cout << "Enemigo del nivel = Directora María";
  std::cout << "\n";
  std::cout << levels[5]->getHistory();
  std::cout << "\n";
  std::cout << "La directora te dice que resuelvas el ejercicio: \n";
  std::cout << levels[5]->getQuestion();
  std::cout << "\n\n";
  std::cout << "Opción 1 = 4589.6  Opción 2 = 4337.5  Opción 3 = 5762.34 ";
  std::cout << "\n";
  l->chooseOption();
  std::cout << "Ingresa la opción que elegiste \n";
  std::cin >> co;
  if (levels[5]->getCorrect() == co ){
    std::cout << "Respuesta correcta \n";
    student->increaseScore();
    student->increaseMoney();
    std::cout << "Puntaje actual = " << student->getScore() << "\n";
    std::cout << "Dinero actual = " << student->getMoney() << "\n";
  } 
  else {
    std::cout << "Respuesta incorrecta :( \n";
    if (student->getShield() != 0){
        student->decreaseShield();
        std::cout << "Escudo actual = " << student->getShield() << "\n";
    } else{
        student->decreaseLife();
        std::cout << "Vida actual = " << student->getLife() << "\n";
    }
  }
}


