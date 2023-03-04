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
  char letra_mayuscula;
  int numero_de_letra{0};

  std::cin >> letra_mayuscula;
  
  numero_de_letra = int(letra_mayuscula) + 32;

  std::cout << char(numero_de_letra) << std::endl;
}
