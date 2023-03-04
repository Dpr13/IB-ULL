/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P1_suma_digitos
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa imprime la suma de los dígitos que componen el número dado
  * @bug There are no known bugs
*/

#include <iostream>

void PropositoPrograma() {
  std::cout << "El programa imprime la suma de los dígitos que componen el número dado\n";
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

void SumaDigitos(int numero) {
  int intermedio{0}, suma{0};
  while (numero > 0) {
    intermedio = numero % 10;
    numero = numero / 10;
    suma = suma + intermedio;
  }
  std::cout << suma << std::endl;
}

int main(int argc, char* argv[]) {
  PropositoPrograma();
if (!NumeroParametrosCorrectos(argc, argv, 2)) {
    return 345;
  }
  int numero{0};
  std::cout << "Introduzca un número: ";
  std::cin >> numero;
  SumaDigitos(numero);
}
