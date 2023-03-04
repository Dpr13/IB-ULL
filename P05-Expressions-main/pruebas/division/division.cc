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
  int dividendo{0};
  int divisor{0};
  int cociente{0};
  int resto{0};
  // std::cout << "Introduce dos números, primero el dividendo y después el divisor: " << std::endl;
  std::cin >> dividendo >> divisor;

  cociente = dividendo / divisor;
  resto = dividendo % divisor;

  std::cout << cociente << " " << resto << std::endl;
  return 0;
}
