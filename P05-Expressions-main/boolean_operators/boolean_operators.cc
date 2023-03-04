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
  bool A{true}, A_{false};
  bool B{true}, B_{false};

  std::cout << "A | B | and | or\n";
  std::cout << "-----------------\n";
  std::cout << A_ << " | " << B_ << " |  " << (A_ && B_) << "  | " << (A_ ||B_);
  std::cout << std::endl << A_ << " | " << B << " |  " << (A_ && B) << "  | " << (A_ || B);
  std::cout << std::endl << A << " | " << B_ << " |  " << (A && B_) << "  | " << (A || B_);
  std::cout << std::endl << A << " | " << B << " |  " << (A && B) << "  | " << (A || B);
  std::cout << std::endl;
}
