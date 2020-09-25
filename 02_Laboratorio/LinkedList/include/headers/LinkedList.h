#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Nodo.h"
#include "../../../Libro/src/Author.cpp"
using namespace std;

template <typename T>
class LinkedList
{
  Nodo<T> *head;
  int size;

public:
  LinkedList();
  LinkedList(T);
  // ~LinkedList();
  void insert(T, int);
  void remove(int);
  int search(T);
  void print();
  int getSize();
  Nodo<T> *getHead();
};

#endif