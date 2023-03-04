/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa ...  
  *        Por definición, ...
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int hora_actual{0}, cantidad_horas{0}, hora_final{0}, horas_totales{0};

  std::cout << "Hora actual: ";
  std::cin >> hora_actual;
  std::cout << "Cantidad de horas: ";
  std::cin >> cantidad_horas;

  horas_totales = hora_actual + cantidad_horas;
  hora_final = horas_totales % 12;
  
  std::cout << "En " << cantidad_horas << " horas, el reloj marcará las " << hora_final << std::endl;
}
    

