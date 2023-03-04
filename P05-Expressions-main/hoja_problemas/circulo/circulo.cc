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
  int radio{0};
  double  perimetro{0}, area{0};

  std::cout << "Introduzca el radio: ";
  std::cin >> radio;

  perimetro = 2 * 3.1416 * radio;
  area = 3.1416 * radio *radio;

  std::cout << "Perímetro: " << perimetro << std::endl;
  std::cout << "Área: " << area << std::endl;
}
