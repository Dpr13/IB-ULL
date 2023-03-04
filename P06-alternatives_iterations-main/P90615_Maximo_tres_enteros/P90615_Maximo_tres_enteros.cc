/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P98960_Maximo_tres_enteros
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief Este programa imprime el número mayor de los que se le entregan
  * @see https://jutge.org/problems/P90615_en
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int numero1{0}, numero2{0}, numero3{0};
  // std::cout << "Este programa imprime el número mayor de los que se le entregan\n";
  // std::cout << "Introduzca 3 números: ";
  std::cin >> numero1 >> numero2 >> numero3;
  if ((numero1 >= numero2) && (numero1 >= numero3)) {
    std::cout << numero1 << std::endl;
  }
  else if ((numero2 >= numero3) && (numero2 >= numero1)) {
    std::cout << numero2 << std::endl;
  }
  else {
    std::cout << numero3 << std::endl;
  }
}

