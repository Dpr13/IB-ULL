/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P97156_intervalo_numeros
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa imprime los números que hay en el intervalo de los dados
  * @see https://jutge.org/problems/P97156_en
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int numero1{0}, numero2{0};
  // std::cout << "El programa imprime los números que hay en el intervalo de los dados\n";
  // std::cout << "Introduzca los dos números: ";
  std::cin >> numero1 >> numero2;
  for (int i = int(numero1); i < numero2; ++i) {
    std::cout << i << ",";
  }
  if (numero1 <= numero2) {
    std::cout << numero2 << std::endl;
  }
}

