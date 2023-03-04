/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P5_leap-year
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa indica si un año es bisiesto o no 
  * @bug There are no known bugs
*/

#include <iostream>

void PropositoPrograma() {
  std::cout << "El programa indica si un año es bisiesto o no\n";
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

void AdivinarBisiesto(int fecha) {
  int numero1{4}, numero2{100}, numero3{400};
  if ((fecha % numero1) == 0) {
    if (fecha % numero2 == 0) {
      if (fecha % numero3 == 0) {
        std::cout << "YES" << std::endl;
      }
      else {
        std::cout << "NO" << std::endl;
      }
    }
    else {
      std::cout << "YES" << std::endl;
    }
  }
  else {
    std::cout << "NO" << std::endl;
  }
}

int main(int argc, char* argv[]) {
  PropositoPrograma();
if (!NumeroParametrosCorrectos(argc, argv, 2)) {
    return 345;
  }
  int fecha{0};
  std::cout << "Introduzca un año: ";
  std::cin >> fecha;
  AdivinarBisiesto(fecha);
}

