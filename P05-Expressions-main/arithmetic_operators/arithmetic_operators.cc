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
  double numero1, numero2;
  std::cout << "Introduzca dos números: ";
  std::cin >> numero1 >> numero2;
  
  std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
  std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
  std::cout << numero2 << " - " << numero1 << " = " << numero2 - numero1 << std::endl;
  std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
  std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
  std::cout << int(numero1) << " % " << int(numero2) << " = " << int(numero1) % int(numero2)<< std::endl;
  std::cout << numero1 << " == " << numero2 << " = " << (numero1 == numero2) << std::endl;
  std::cout << numero1 << " >= " << numero2 << " = " << (numero1 >= numero2) << std::endl;
  std::cout << numero1 << " > " << numero2 << " = " << (numero1 > numero2) << std::endl;
  std::cout << numero1 << " <= " << numero2 << " = " << (numero1 <= numero2) << std::endl;
  std::cout << numero1 << " < " << numero2 << " = " << (numero1 < numero2) << std::endl;
  std::cout << numero1 << " != " << numero2 << " = " << (numero1 != numero2) << std::endl;
}
