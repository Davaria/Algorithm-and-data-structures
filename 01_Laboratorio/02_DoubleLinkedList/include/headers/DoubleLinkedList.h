#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include "Nodo.h"
using namespace std;

template <typename T>
class DoubleLinkedList
{
  Nodo<T> *head;
  Nodo<T> *tail;
  Nodo<T> *last();
  int size;

public:
  DoubleLinkedList();
  DoubleLinkedList(T);
  void insert(T, int);
  void remove(int);
  int search(T);
  void print();
};

#endif