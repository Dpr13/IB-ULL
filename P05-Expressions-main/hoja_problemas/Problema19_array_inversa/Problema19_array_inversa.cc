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
#include <vector>

int main() {
  int longitud_vector{0}, numero{0};
  std::vector<int> lista_de_numeros;
  std::vector<int> lista_inversa;
  std::cin >> longitud_vector;
  
  for(int i = longitud_vector; i != 0; --i) {
    std::cin >> numero;
    lista_de_numeros.emplace_back(numero);
  }
  
  for(int j = longitud_vector; j != 0; --j) {
    lista_inversa.emplace_back(lista_de_numeros[j - 1]);
  }

  for(int k = 0; k != longitud_vector; ++k) {
    std::cout << lista_inversa[k] << " ";
  } 
  std::cout << std::endl;
}
