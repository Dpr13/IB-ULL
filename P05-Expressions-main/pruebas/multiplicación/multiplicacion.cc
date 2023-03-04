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
  int factor1{0},factor2{0},resultado{0};
  
  std::cout << "¿Qué dos números quieres multiplicar? \n";
  std::cin >> factor1 >> factor2;

  resultado = factor1 * factor2;

  std::cout << "El resultado de la multiplicación de " << factor1 << " y " << factor2 << " es de " << resultado << std::endl;
}
