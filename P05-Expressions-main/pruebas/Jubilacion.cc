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
  int edad_persona{0};
  int tiempo_restante{0};
  std::cout << "Introduce los años que tienes: ";
  std::cin >> edad_persona;
  tiempo_restante = 65 - edad_persona;
  std::cout << "Te faltan " << tiempo_restante << " años para jubilarte" << std::endl;
} 
  

