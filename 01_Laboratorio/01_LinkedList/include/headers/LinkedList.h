#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Nodo.h"
using namespace std;

template <typename T>
class LinkedList
{
  Nodo<T> *head;
  int size;

public:
  LinkedList();
  LinkedList(T);
  void insert(T, int);
  void remove(int);
  int search(T);
  void print();
};

#endif