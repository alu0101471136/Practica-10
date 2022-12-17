#ifndef MONEDAS_H
#define MONEDAS_H

#include <vector>

class Monedas {
 public:
  Monedas() : vector_monedas_{2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01}, repeticiones_{0, 0, 0, 0, 0, 0, 0, 0} { /* Constructor por defecto*/ }
  Monedas(std::vector<double> vector_monedas, std::vector<int> repeticiones) : 
        vector_monedas_{vector_monedas}, repeticiones_{repeticiones} { /* Constructor con parametros */ }
  void CompletarBilletes();
  void DevolverCambio(double);
  std::vector<double> vector_monedas() { return vector_monedas_; } // Getter de las monedas
  std::vector<int> repeticiones() { return repeticiones_; } // Getter de las repeticiones
 private:
  std::vector<double> vector_monedas_; // Atributo que almacena los valores de las monedas
  std::vector<int> repeticiones_;      // Atributo que contiene las repeticiones de cada moneda
};

#endif