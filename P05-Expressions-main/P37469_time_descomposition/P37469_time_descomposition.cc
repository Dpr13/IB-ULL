/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa descompone un número en horas, minutos y segundos
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int numero{0}, horas{0}, minutos{61}, segundos{0}, segundos_en_hora{3600}, minutos_en_hora{60};
  // std::cout << "Este programa descompone un número en horas, minutos y segundos\n" << "Introduzca el número: "; 
  std::cin >> numero;
  horas = int(numero / segundos_en_hora);
  segundos = int(numero % minutos_en_hora);
  minutos = int((numero % segundos_en_hora) / minutos_en_hora);
  std::cout << horas << " " << minutos << " " << segundos << std::endl;
}
