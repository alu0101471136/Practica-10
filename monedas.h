#ifndef MONEDAS_H
#define MONEDAS_H

#include <vector>
#include <utility> 

class Monedas {
 public:
  Monedas() : vector_monedas_{} { /* Constructor por defecto*/ }
  Monedas(std::vector<std::pair<float, double>> vector_monedas) : 
        vector_monedas_{vector_monedas} { /* Constructor con parametros */ }
  void CompletarMonedas();
  void CompletarBilletes();
  void DevolverCambio(double);
  std::vector<std::pair<float, double>> vector_monedas() { return vector_monedas_; } // Getter
 private:
  std::vector<std::pair<float, double>> vector_monedas_;
};

#endif