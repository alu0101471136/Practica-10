#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <vector>

void MostrarSolucion(std::vector<double>&);
void Usage(int numero_parametros, std::string primer_parametro);
const std::string kHelpText{"Dada una cierta cantidad n(numero real), el algoritmo debe devolver el \nconjunto de monedas correcto cuya suma sea igual a n."};

#endif