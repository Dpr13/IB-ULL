/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa ...  
  *        Por definición, ...
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

int main() {
  int cateto_a{0}, cateto_b{0};
  double hipotenusa{0};

  std::cout << "Introduzca cateto a: ";
  std::cin >> cateto_a;
  std::cout << "Introduza cateto b: ";
  std::cin >> cateto_b;

  hipotenusa = sqrt(cateto_a * cateto_a + cateto_b * cateto_b);

  std::cout << "El valor de la hipotenusa es " << hipotenusa << std::endl;
}
