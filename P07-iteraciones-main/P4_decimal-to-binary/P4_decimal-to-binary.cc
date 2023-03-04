/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P4_decimal-to-binary
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa convierte un número decimal en binario
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

void PropositoPrograma() {
  std::cout << "El programa convierte un número decimal en binario\n";
}

bool NumeroParametrosCorrectos(const int argc, char *argv[], const int kNumeroCorrecto) {
  if (argc != kNumeroCorrecto) {
    std::cout << "Este programa se ha ejecutado con un número incorrecto de paŕametros" << std::endl << std::endl;
    std::cout << "Debería ser" << argv[0] << " parametro1" << std::endl;
    std::cout << "parametro1: " << " Número entero " << std::endl;
    return 'a';
  }
  return true;
}

void PasarDecimalBinario(int decimal) {
  int numero{0}, exponente{0}, binario{0};
  while (decimal != 0) {
    numero = decimal % 2;
    binario += numero * pow(10,exponente);
    ++exponente;
    decimal /= 2;
  }
  std::cout << binario << std::endl;
}

int main(int argc, char* argv[]) {
  PropositoPrograma();
if (!NumeroParametrosCorrectos(argc, argv, 2)) {
    return 345;
  }
  int decimal{0};
  std::cout << "Introduzca un número decimal: ";
  std::cin >> decimal;
  PasarDecimalBinario(decimal);
}
