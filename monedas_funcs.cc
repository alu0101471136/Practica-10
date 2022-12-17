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
  if (numero_parametros != 2 && numero_parametros !=3) {
    std::cout << "Modo de Uso: ./cambio_monedas (-b|-o) n" << std::endl;
    std::cout << "Pruebe ./cambio_monedas --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void MostrarSolucion(std::vector<double>& solucion) {
  std::cout << "Solucion: ";
  for (unsigned i = 0; i < solucion.size(); ++i) {
    int numero_repeticiones{0};
    for (unsigned j = 0; j < solucion.size(); ++j) {
      if (solucion[i] == solucion[j]) {
        ++numero_repeticiones;
      }
    }
    std::cout << numero_repeticiones << "x" << solucion[i] << "€ ";
    i += (numero_repeticiones - 1);
  }
  std::cout << "\n";
  std::cout << "Total monedas: " << solucion.size() << "\n";
}

void Monedas::CompletarBilletes() {
  vector_monedas_.insert(vector_monedas_.begin(), 5);
  vector_monedas_.insert(vector_monedas_.begin(), 10);
  vector_monedas_.insert(vector_monedas_.begin(), 20);
  vector_monedas_.insert(vector_monedas_.begin(), 50);
  vector_monedas_.insert(vector_monedas_.begin(), 100);
  vector_monedas_.insert(vector_monedas_.begin(), 200);
  vector_monedas_.insert(vector_monedas_.begin(), 500);
}

std::vector<double> Monedas::DevolverCambio(double valor_objetivo) {
  std::vector<double> solucion;
  double suma{0};
  while (suma != valor_objetivo) {
    double mayor_moneda{0};
    for (unsigned i = 0; i < vector_monedas_.size(); ++i) {
      if (vector_monedas_[i] + suma <= valor_objetivo) {
        mayor_moneda = vector_monedas_[i];
        break;
      } else {
        mayor_moneda = 3;
      }
    }
    if (mayor_moneda == 3) {
      solucion.push_back(-1);
    }
    solucion.push_back(mayor_moneda);
    suma += mayor_moneda;
  }
  return solucion;
}

std::vector<double> Monedas::DevolverCambioEficiente(double valor_objetivo) {
  std::vector<double> solucion;
  double suma{0};
    for (unsigned i = 0; i < vector_monedas_.size(); ++i) {
      int cociente = (valor_objetivo - suma) / vector_monedas_[i];
      if (cociente >= 0) {
        for (int j = 0; j < cociente; ++j) 
          solucion.push_back(vector_monedas_[i]);
        suma += vector_monedas_[i] * cociente;
      }
    }
  return solucion;
}