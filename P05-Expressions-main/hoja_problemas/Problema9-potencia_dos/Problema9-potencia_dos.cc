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
  int exponente{0}, operacion{1};
  std::cout << "Introduzca número: ";
  std::cin >> exponente;

  for(int i = 0; i <= exponente; ++i) {
    std::cout << operacion << " ";
    operacion = operacion * 2;
  }
  std::cout << std::endl;
}
