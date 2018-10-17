#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>

class Individual
{
private:

public:
  int Mshort;
  int Mlong;

  double retorno;

// Construtores //////////////////
  Individual();
  Individual(int i, int j);
//////////////////////////////////

// Operadoes sobre organismo//////
  void killObject();

  bool isNull();
//////////////////////////////////

// Visualizacao //////////////////
  friend std::ostream& operator<<(std::ostream& ostream, Individual& ind);
//////////////////////////////////
};

#endif // INDIVIDUAL_H
