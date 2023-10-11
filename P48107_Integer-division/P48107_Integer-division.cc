/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P48107_Integer-division.cc
  * @author Diego Hernández Toledo alu0101550183@ull.edu.es
  * @date Oct 11 2023
  * @brief This program shows the division of two integer numbers and their
  * rest.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
int numero1;
int numero2;
  std::cin >> numero1;
  std::cin >> numero2;
  if ( numero2 >> 0 ) {
  std::cout<< numero1/numero2 <<" "<< numero1%numero2 <<std::endl;
  }
}            