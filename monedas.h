#ifndef MONEDAS_H
#define MONEDAS_H

#include <vector>

class Monedas {
 public:
  Monedas() : vector_monedas_{2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01} { /* Constructor por defecto*/ }
  Monedas(std::vector<double> vector_monedas) : 
        vector_monedas_{vector_monedas} { /* Constructor con parametros */ }
  void CompletarBilletes();
  std::vector<double> DevolverCambio(double);
  std::vector<double> DevolverCambioEficiente(double);
  std::vector<double> vector_monedas() { return vector_monedas_; } // Getter de las monedas
 private:
  std::vector<double> vector_monedas_; // Atributo que almacena los valores de las monedas
};

#endif