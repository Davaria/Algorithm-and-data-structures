#ifndef PILAS_H
#define PILAS_H
#include "Nodo.h"
using namespace std;

template <typename T>
class Pilas
{
  Nodo<T> *head;
  int size;
  void pilaVacia();

public:
  Pilas();
  Pilas(T);
  void push(T);
  void pop();
  //// int search(T);
  void print();
};

#endif