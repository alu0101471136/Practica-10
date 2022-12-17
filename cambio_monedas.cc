/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Computabilidad y Algoritmia 2022-2023
  *
  * @file p08_grammar2CNF.cc
  * @author Raúl Álvarez Pérez alu0101471136@ull.edu.es
  * @date Nov 17 2022
  * @brief Este es el programa principal de p08_grammar2CNF
  * @bug No existen fallos conocidos
  */
#include <iostream>
#include "tools.h"
#include "monedas.h"

int main(int argc, char* argv[]) {
  int numero_argumentos{argc};
  const std::string kValorEntrante{argv[1]};
  Usage(numero_argumentos, kValorEntrante);
  Monedas todas_monedas;
  if (kValorEntrante != "-b" && kValorEntrante != "-o") {
    double valor_objetivo{std::stod(kValorEntrante)};
    std::vector<double> solucion = todas_monedas.DevolverCambio(valor_objetivo);
    MostrarSolucion(solucion);
  } else if (kValorEntrante == "-b") {
    std::string cadena_aux{argv[2]};
    double valor_objetivo{std::stod(cadena_aux)};
    todas_monedas.CompletarBilletes();
    todas_monedas.DevolverCambio(valor_objetivo);
  }
  return 0;
}