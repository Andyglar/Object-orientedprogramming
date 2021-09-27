/*************************************************************
* File: student.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of 
  Student class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "student.h"
//constructor con valores default

Student::Student()
  : life(100), money(0), shield(0), name(getName()), score(0){
}
//Objeto que creare en secret door
Student::Student(int l, int m, int s, std::string n, int sc)
  : life(l), money(m), shield(s), name(n), score(sc){
}
//constructor de copia
Student::Student(const Student &student)
  : life(student.life), money(student.money), shield(student.shield), name(student.name),score(student.score){
}

//Geters
int Student::getLife() const{
  return life;
}
 
int Student::getShield() const{
  return shield;
}

int Student::getMoney() const{
  return money;
}

int Student::getScore() const{
  return score;
}

std::string Student::getName() const{
  std::string name;
std::cout << "Hola pequeño estudiante de 4to año, ¿cuál es tu nombre?" << "\n" ;
  std::cin >> name;
    return name;
}  
//seters
void Student::setLife (int l){
  life = l;
}

void Student::setShield (int s){
  shield = s;
}

void Student::setMoney (int m){
  money = m;
}

void Student::setScore (int sc){
  score = sc;
}

void Student::setName (std::string n){
  name = n;
}
  
//métodos de estudiante que utilizaré en cada nivel        

void Student::decreaseMoney(){
  if (money >= 100){
    money -= 100;
    std::cout << "El dinero restante es de " << money << " monedas \n"; 
  } 
//si compra escudo en la tienda perdera dinero
}
void Student::increaseMoney(){
  money += 75;
  std::cout << "Has ganado 75 monedas" << "\n";
}
void Student::decreaseLife(){
  if (life != 0){
    life -= 10;
    std::cout << "El enemigo ha bajado tu vida " << "\n" << "Tu vida restante es " << getLife() << "\n" ; 
  }
  //si no contesta bien la pregunta con el enemigo le bajara la vida
}
void Student::increaseScore(){
  score += 25;
  std::cout << "Aumenta 25 puntos tu puntaje " << "\n";
  //si contesta bien la pregunta aumentará
}
void Student::decreaseScore(){
  score -= 25;
  std::cout << "Disminuyó 25 puntos tu puntaje " << "\n";
  //si contesta mal la pregunta, disminuirá su score
}
void Student::increaseShield(){
  shield += 50;
  std::cout << "Tu escudo aumentó 50, gracias a la compra que hiciste " << shield << "\n";
  //si compra el escudo aumentara
}
void Student::decreaseShield(){
  shield = shield - 25;
  std::cout << "Tu escudo disminuyó 25" << "\n";
  std::cout << "Tu escudo actual es: " << getShield() << "\n";
  //si contesta mal la pregunta del enemigo y tiene escudo, le baja al escudo, en caso de que no tenga escudo, le baja la vida
}

std::string Student::toString() const {
  std::stringstream aux;   
  
  aux << "Hola " << name <<", los próximos datos estarán presentes en toda tu aventura, si sales con vida, y obtienes un puntaje de 100 o más, podrás regresar a la normalidad.... \n"   << "Name = " << name << "\n" << "Life = " <<  life << "\n" << "Shield = " << shield << "\n" << "Money = " << money << "\n" << "Score = " << score << "\n" ;
  return aux.str();
}