/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief Programa que solicite al usuario un número entero de tres dígitos y escriba en pantalla el número con los dígitos en orden inverso.
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int numero_invertido{0}, numero{0}, numero_intermedio{0};

  std::cout << "Introduzca número: ";
  std::cin >> numero;

  while (numero > 0) {
    numero_intermedio = numero % 10;
    numero_invertido = (numero_invertido * 10) + numero_intermedio;
    numero = numero / 10;
  }

  std::cout << numero_invertido << std::endl;
}
