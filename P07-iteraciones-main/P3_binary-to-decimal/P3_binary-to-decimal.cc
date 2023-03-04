/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P3_bianry-to-decimal.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa convierte un número binario en decimal
  * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

void PropositoPrograma() {
  std::cout << "El programa convierte un número binario en decimal\n";
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

bool ComprobarBinario(int binario) {
  while (binario > 0) {
    if ((binario % 10 != 0) && (binario % 10 != 1)) {
      std::cout << "Wrong input " << std::endl;
      exit(1);
    }
    binario /= 10;
  }
  return true;
}

void PasarBinarioEntero(int binario) {
  int decimal{0}; 
  int numero{0};
  for (int i{0}; binario != 0; ++i) {
    numero = binario % 10;
    binario = binario / 10;
    decimal += numero * pow(2, i);
  }
  std::cout << decimal << std::endl;
}

int main(int argc, char* argv[]) {
  PropositoPrograma();
if (!NumeroParametrosCorrectos(argc, argv, 2)) {
    return 345;
  }
  int binario{0};
  std::cout << "Introduzca un número binario: ";
  std::cin >> binario;
  ComprobarBinario(binario);
  PasarBinarioEntero(binario);
}
