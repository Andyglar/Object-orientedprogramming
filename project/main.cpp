#include <iostream>
#include "student.h"
#include "secretdoor.h"

int main(int argc, char* argv[]) { 
  int x;

  Student *student;
  student = new Student (100, 0, 0, student->getName(), 0);
  Secretdoor b;
  Equestion z;
  b.resolveLevel(student);
  std::cout << "Continuar (0 = No, 1 = Yes)? \n";
  std::cin >> x;
  if (x == 1){
    std::cout << "\n";
    z.getEnemyName();
    b.resolveEquestion(student);
  } else{
    std::cout << "El juego terminó, si no vuelves a intentarlo te quedarás aquí para siempre \n";
  }
  if (student->getScore() >= 100){
    std::cout << "Felicidades, obtuviste 4 o más respuestas correctas, sal por la puerta de la escuela y volverás a la normalidad, sigue así en tus clases de matemáticas...\n";
  } else{
    std::cout << "Puntaje final = " <<  student->getScore() << "\n No obtuviste el puntaje mínimo para poder pasar la prubea, puedes intentarlo en una hora, mientras tanto ve a practicar matemáticas, para que así puedas volver a la normalidad \n";
  }
//si el puntaje es mayor a 100, entonces acabo el juego, de lo contrario perdió 
return 0;
}


