#ifndef PRUEBACONST_h
#define PRUEBACONST_H


#include <iostream>
#include <cmath>


namespace figuras{

class Triangulo { 
 public:
   using Tipo = enum {EQUILATERO, ISOSCELES, ESCALENO};
   Triangulo() {
     lado1_;
     lado2_;
     lado3_;
       
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

  private:
 const int lado1_;
 const int lado2_;
 const int lado3_;
}; //class
} 
