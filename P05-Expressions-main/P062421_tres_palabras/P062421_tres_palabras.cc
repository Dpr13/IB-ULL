/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa imprime tres palabras al revés de como se las dan
  * @bug There are no known bugs
*/

#include <iostream>
#include <string>

int main() {
  std::string palabra1, palabra2, palabra3;
  // std::cout << "Aporta tres palabras y las imprime al revés";
  std::cin >> palabra1 >> palabra2 >> palabra3;
  std::cout << palabra3 << " " << palabra2 << " " << palabra1<< std::endl;
}
