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
  double valor_1{0}, valor_2{0}, valor_3{0}, valor_4{0}, media{0};

  std::cout << "Primer valor: ";
  std::cin >> valor_1;
  std::cout << "Segundo valor: ";
  std::cin >> valor_2;
  std::cout << "Tercer valor: ";
  std::cin >> valor_3;
  std::cout << "Cuarto valor: ";
  std::cin >> valor_4;

  media = (valor_1 + valor_2 + valor_3 + valor_4) / 4;

  std::cout << "El promedio es: " << media << std::endl;
}
