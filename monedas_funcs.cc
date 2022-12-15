/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Computabilidad y Algoritmia 2022-2023
  *
  * @file p08_fucns.cc
  * @author Raúl Álvarez Pérez alu0101471136@ull.edu.es
  * @date Nov 17 2022
  * @brief Programa en el que se declaran las funciones
  * @bug No existen fallos conocidos
  */
#include <iostream>
#include <vector>
#include "tools.h"
#include "monedas.h"
/**
 * @name: Usage
 * @brief: Controlar el uso del programa para que funcione correctamente
 * @param: numero_parametros: el numero de parametros pasados al ejecutar el programa, 
 *         primer_parametro: parametro en el que estara '--help'
 */
void Usage(int numero_parametros, std::string primer_parametro) {
  if (primer_parametro == "--help" ) {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS); 
  }
  if (numero_parametros != 2) {
    std::cout << "Modo de Uso: ./cambio_monedas n" << std::endl;
    std::cout << "Pruebe ./cambio_monedas --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Monedas::CompletarMonedas() {
  vector_monedas_.push_back({2, 0});
  vector_monedas_.push_back({1, 0});
  vector_monedas_.push_back({0.50, 0});
  vector_monedas_.push_back({0.20, 0});
  vector_monedas_.push_back({0.10, 0});
  vector_monedas_.push_back({0.050, 0});
  vector_monedas_.push_back({0.020, 0});
  vector_monedas_.push_back({0.010, 0});
}

void Monedas::CompletarBilletes() {
  vector_monedas_.push_back({500, 0});
  vector_monedas_.push_back({200, 0});
  vector_monedas_.push_back({100, 0});
  vector_monedas_.push_back({50, 0});
  vector_monedas_.push_back({20, 0});
  vector_monedas_.push_back({10, 0});
  vector_monedas_.push_back({5, 0});
  CompletarMonedas();
}

void Monedas::DevolverCambio(double valor_objetivo) {
  std::cout << "nada" << "\n";
}