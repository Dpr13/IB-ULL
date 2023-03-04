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

int main() {
  double centimetro{0}, pulgada{0};

  std::cout << "Introduzca longitud: ";
  std::cin >> centimetro;

  pulgada = centimetro / 2.54;

  std::cout << centimetro << " cm = " << pulgada << " in \n";
}
