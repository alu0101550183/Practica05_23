/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.cc
  * @author Diego Hernández Toledo alu0101550183@ull.edu.es
  * @date Oct 11 2023
  * @brief This program makes a the true table.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
  bool TRUE = true;
  bool FALSE = false;
  std::cout << "p q !p !q p&&q p||q" << std::endl;
  std::cout << "--- -- -- ---- ----" << std::endl;
  std::cout << FALSE << " " << FALSE << " " << !FALSE << "  " << !FALSE << "  " << (FALSE && FALSE) << "    " << (FALSE || FALSE) << std::endl;
  std::cout << FALSE << " " << TRUE << " " << !FALSE << "  " << !TRUE << "  " << (FALSE && TRUE) << "    " << (FALSE || TRUE) << std::endl;
  std::cout << TRUE << " " << FALSE << " " << !TRUE << "  " << !FALSE << "  " << (TRUE && FALSE) << "    " << (TRUE || FALSE) << std::endl;
  std::cout << TRUE << " " << TRUE << " " << !TRUE << "  " << !TRUE << "  " << (TRUE && TRUE) << "    " << (TRUE || TRUE) << std::endl;
  return 0;
}
