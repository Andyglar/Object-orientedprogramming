/*************************************************************
* File: store.cpp
* Author: Andrea González Arredondo
* Description: This file contains the implementation of
  Store class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "store.h"
#include <iostream>

//Constructor con valores default
Store::Store()
  : cost(100), shieldc(50){
  }
//Constructor que usaré
Store::Store(int c, int s)
  : cost(c), shieldc(s){    
  }
//Constructor de copia
Store::Store(const Store &store)
  : cost(store.cost), shieldc(store.shieldc){
  } 

//Geters
int Store::getCost() const{
  return cost;
}
 
int Store::getShieldc() const{
  return shieldc;
}

//Seters
void Store::setShieldc (int s){
  shieldc = s;
}

void Store::setCost (int c){
  cost = c;
}

//Métodos para interactuar con la tienda
std::string Store::toString() const {
  std::stringstream aux;
  
  aux << "La tienda de tu escuela luce diferente, es como color gris, y solo hay una caja registradora arriba de una mesa color blanca, que tiene una nota que te recomienda comprar la poción mágica que se encuentra en la repisa de enfrente, ya que los niveles próximos tus enemigos serán más fuertes, lo único que tienes que hacer es elegir entre dos botones en la caja registradora para comprar el escudo y automáticamante desaparecerán 100 monedas de tu bolsillo.... ¿Tomarás la poción mágica? \n"  << "Cantidad  que contiene \n" << "Shield = " << shieldc << "\n" << "Costo de escudo \n" << " Cost = " << cost << "\n";
  return aux.str();

}

void Store::CheckShieldCost(){
  std::cout << "Este escudo te dará ventaja sobre tus enemigos, ya que ellos solo tienen 100 de vida " <<  "\n"; 
  std::cout << "Te proporcionará 50 puntos adicionales a los de tu vida" <<  "\n"; 
  //Llamar a función del dinero para poder comprar el escudo
  //debe aparecer después de cada nivel hasta que pueda comprar el escudo
}

void Store::BuyShield(){
  int option;
  std::cout<< "Si deseas comprar el escudo elige la opción 1" << "\n";
  std::cin >> option;
  if (option == 1) { //funcion de checar su el dinero es mas de 100 que iría en estudiante
    std::cout << "Has comprado el escudo, ahora tienes " << 50 << " adicionales de escudo y el dinero que te queda es " << "\n"; //funcion de ver cuanto dinero queda y cambiar el escudo
    //llamar a funcion de estudiante
  } else {
    std::cout << "Con cuidado con tus enemigos....";
  }
  //if option..... 
   //Bajarle el dinero al jugador cuando se compre el escudo, y la función de aumentar el escudo
}