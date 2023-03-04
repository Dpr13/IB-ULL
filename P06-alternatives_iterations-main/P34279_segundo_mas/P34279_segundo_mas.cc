/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P98960_Maximo_tres_enteros
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief Este programa añade un segundo más a la hora dada
  * @see https://jutge.org/problems/P34279_en
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int horas{0}, minutos{0}, segundos{0}, correccion{60};
  // std::cout << "Este programa añade un segundo a la hora dada\n";
  // std::cout << "Introduzca las horas, minutos y segundos: ";
  std::cin >> horas >> minutos >> segundos;
  segundos = int(segundos + 1);
  if (segundos >= correccion) {
    minutos = int(minutos + 1);
    segundos = int(segundos - correccion);
  }
  if (minutos >= correccion) {
    horas = int(horas + 1);
    minutos = int(minutos - correccion);
  }
  if (horas >= 24) {
    horas = int(horas - 24);
  }
  if (horas < 10) {
    std::cout << "0";
  }
  std::cout << horas << ":";
  if (minutos < 10) {
    std::cout << "0";
  }
  std::cout << minutos << ":";
  if (segundos < 10) {
    std::cout << "0";
  }
  std::cout << segundos << "\n";
}
