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
  double lado1{0}, lado2{0}, lado3{0};
  std::cout << "Introduza lado1: ";
  std::cin >> lado1;
  std::cout << "Introduza lado2: ";
  std::cin >> lado2;
  std::cout << "Introduza lado3: ";
  std::cin >> lado3;

  if (lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado3)) {
    std::cout << "No es una triángulo válido\n";
  }
  else if (lado1 == lado2 && lado1 == lado3) {
    std::cout << "Es un triángulo equilátero\n";
  }
  else if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)) {
    std::cout << "Es un triángulo isósceles\n";
  } 
 else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
    std::cout << "Es un triángulo escaleno\n";
  }
}
    

