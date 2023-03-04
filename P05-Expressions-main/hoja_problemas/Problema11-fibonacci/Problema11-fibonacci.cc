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
  int cantidad_numeros{0}, numero1{0}, numero2{0};
  std::cout << "Introduzca un número: ";
  std::cin >> cantidad_numeros;
  
  for (int i = 0; i < cantidad_numeros; ++i) {
    if (i == 1) {
      ++numero2;
    }
    if (i % 2 == 0){
      numero1 = numero1 + numero2;
      std::cout << numero1 << " ";
    }
    else {
      numero2 = numero2 + numero1;
      std::cout << numero2 << " ";
    }
  }
  std::cout << std::endl;
}
