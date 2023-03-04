/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P2_Fibonacci.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa imprime la serie de Fibonacci tantas veces como se le indique
  * @bug There are no known bugs
*/

#include <iostream>

void PropositoPrograma() {
  std::cout << "El programa imprime la serie de Fibonacci tantas veces como se le indique\n";
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

bool Fibonacci() {
  int cantidad_numeros{0}, numero1{0}, numero2{0};
  std::cout << "Introduzca un número: ";
  std::cin >> cantidad_numeros;
  for (int i = 0; i < cantidad_numeros; ++i) {
    if (i == 1) {
      ++numero2;
    }   
    if (i % 2 == 0){ 
      numero1 = numero1 + numero2;
      std::cout << numero1 << " ";
    }   
    else {
      numero2 = numero2 + numero1;
      std::cout << numero2 << " ";
    }   
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  PropositoPrograma();
  if (!NumeroParametrosCorrectos(argc, argv, 2)) {
    return 345;
  }
  Fibonacci();
 } 
