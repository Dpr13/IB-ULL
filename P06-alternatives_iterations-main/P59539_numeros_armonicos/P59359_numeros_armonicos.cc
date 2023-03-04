/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59539_numeros_armonicos
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa imprime numeros armonicos
  * @see https://jutge.org/problems/P59539_en
  * @bug There are no known bugs
*/

#include <iostream>
#include <limits>
#include <iomanip>

int main() {
  double numero{0};
  double numero_armonico{0};
  // std::cout << "Este programa imprime números armónicos\n";
  // std::cout << "Introduzca un número: ";
  std::cin >> numero;
  for (double i = 1; i <= numero; ++i) {
    numero_armonico = double(numero_armonico + (1 / i));
  }
  std::cout << std::fixed << std::setprecision(4) << numero_armonico <<std::endl;
}
