/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P98960_Mayusculas_minusculas
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa convierte minúsculas en mayúsculas y viceversa
  * @see https://jutge.org/problems/P98960_en
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  char letra;
  int cambio{32}, maximo_mayuscula{90}, numero_letra;
  // std::cout << "Este programa convierte minúsculas en mayúsculas y viceversa\n";
  // std::cout << "Introduzca una letra: ";
  std::cin >> letra;
  numero_letra = int(letra);
  if (numero_letra <= maximo_mayuscula) {
    std::cout << char(numero_letra + cambio) << std::endl;
  }
  else {
    std::cout << char(numero_letra - cambio) << std::endl;
  }
}
