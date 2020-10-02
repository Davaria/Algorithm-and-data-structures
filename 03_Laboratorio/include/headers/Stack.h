#ifndef STACK_H
#define STACK_H
#include "../../src/Nodo.cpp"
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
  Nodo<T> *head;
  Nodo<T> *last;

public:
  ~Stack();
  Stack();
  Stack(T);
  void push(T);
  T pop();
  T top();
  void print();
  bool isEmpty();
};

#endif