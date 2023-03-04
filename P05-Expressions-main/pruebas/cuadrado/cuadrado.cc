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
  int lado{0};
  int perimetro{0};
  int area{0};
  
  std::cout << "Introduce cuánto mide el lado d tu cuadrado\n";
  std::cin >> lado;

  perimetro = lado * 4;
  area = lado * lado;

  std::cout << "Tu cuadrado tiene un perímetro de " << perimetro << " cm y su área es de " << area << " cm²\n";
}
