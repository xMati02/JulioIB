/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Matías Viola
 * @date 24 Jun 2021
 * @brief Examen Práctico Julio 2021
 *        
 *
 */
#include <iostream>
#include "pruebaconst.h"

int main(int argc, char **argv) {
  figuras::Triangulo triangulo1{30 , 30, 10};

  std::cout << "Perímetro: " << triangulo1.GetPerimetro() << std::endl;
  std::cout << "Área: " << triangulo1.GetArea() << std::endl;
  if (triangulo1.EsEquilatero()) {
    std::cout << "Es Equilatero" << std::endl;
  } else {
    std::cout << "NO Es Equilátero" << std::endl;
  }
  }

  figuras::Triangulo triangulo2{30, 10, 30};
  if (triangulo1 == triangulo2) {
    std::cout << "Triángulos iguales" << std::endl;
  } else {
    std::cout << triangulo2 << std::endl:
  }

  std::cout << triangulo2 << std::endl;
  return 0;
}