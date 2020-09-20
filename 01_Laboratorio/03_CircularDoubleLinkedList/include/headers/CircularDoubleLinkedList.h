#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include "Nodo.h"
using namespace std;

template <typename T>
class CircularDoubleLinkedList
{
  Nodo<T> *first;
  Nodo<T> *last;
  int size;

public:
  CircularDoubleLinkedList();
  CircularDoubleLinkedList(T);
  void insert(T, int);
  void remove(int);
  int search(T);
  void print();
  // Nodo<T> *last();
};

#endif