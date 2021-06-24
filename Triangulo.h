#ifndef TRIANGULO_H
#define TRIANGULO_H


#include <iostream>
#include <cmath>


namespace figuras {


class Triangulo { 
 public:
   using Tipo = enum {EQUILATERO, ISOSCELES, ESCALENO};
   Triangulo () {
     lado1_ = 0;
     lado2_ = 0;
     lado3_ = 0;
       if (lado1_ > lado2_ || lado3_) {
         std::cout << "El primer lado no debe ser el de mayor longitud." << std::endl;
       }
       if (lado1_ < (lado2_ + lado3_) || lado2_ < (lado1_ + lado3_) || lado3_ < (lado1_ + lado2_)) {
         std::cout << "El triángulo cumple la desigualdad triangular."
       }
       else {
         std::cout << "El triángulo no cumple la desigualdad triangular."
       }
  }

   int GetPerimetro() {
     int Perimetro;
     Perimetro = lado1_ + lado2_ + lado3_;
     return Perimetro();
  }

/* Método que retorna el área del triángulo*/
  int GetArea() {
      int Area;
      Area = sqrt(((lado1_ + lado2_ + lado3_)/2) * (((lado1_ + lado2_ + lado3_)/2) - lado1_) * (((lado1_ + lado2_ + lado3_)/2) - lado2_) * (((lado1_ + lado2_ + lado3_)/2) - lado3_));
      return Area();
  }

/* Metodo que retorna el tipo de triángulo */
  int GetTipo() { 
    
    if (lado1_ == lado2_ == lado3_) {
      Equilatero::Tipo = EQUILATERO;
    }

    if (((lado1_ == lado2_) != lado3_) || ((lado1_ == lado3_) != lado2_) || ((lado2_ == lado3_) != lado1_)) {
      Isosceles::Tipo = ISOSCELES;
    }

    if (lado1_ != lado2_ != lado3_) {
      Escaleno::Tipo = ESCALENO;
    }
    return Tipo();
  }

/* Método que devuelve "true" si el triángulo es equilatero */
  bool EsEquilatero() {
      if (GetTipo == EQUILATERO) {
        EsEquilatero() = true;
      } 
      else {
        EsEquilatero() = false;
      }
  }

/* Método que devuelve "true" si el triángulo es equilatero */
  bool EsIsosceles(){
    if (GetTipo == ISOSCELES) {
      EsIsosceles() = true;
    } 
    else {
      EsIsosceles() = false;
      }
  }
  

 private:
 const int lado1_;
 const int lado2_;
 const int lado3_;
}; //class


} //namespace


#endif