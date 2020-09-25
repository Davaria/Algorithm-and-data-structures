#include "../include/headers/Pilas.h"

template <typename T>
Pilas<T>::Pilas()
{
  head = nullptr;
  size = 0;
}

template <typename T>
Pilas<T>::Pilas(T value)
{
  head = new Nodo<T>(value);
  size = 1;
}

template <typename T>
void Pilas<T>::push(T value)
{
  Nodo<T> *newNodo = new Nodo<T>(value);
  Nodo<T> *cursor = head;
  Nodo<T> *previous = nullptr;
  if (pos == 0 || size == 0)
  {
    if (!size)
    {
      head = new Nodo<T>(value);
      size++;
    }
    else
    {
      newNodo->setNext(head);
      head = newNodo;
      size++;
    }
  }
  else
  {
    int account{0};
    while (cursor != nullptr)
    {
      previous = cursor;
      cursor = cursor->getNext();
    }
    previous->setNext(newNodo);
    newNodo->setNext(cursor);
    size++;
  }
}

// Hay un bug con la posicion 0
template <typename T>
void Pilas<T>::pop()
{
  Nodo<T> *cursor = head;
  Nodo<T> *NodoRem;
  if (!size)
    cout << "No hay elementos en nuestro lista!!" << endl;
  else if (size == 1)
  {
    head = head->getNext();
    delete cursor;
    cursor = nullptr;
    size--;
  }
  else
  {
    while (cursor != nullptr)
    {
      cursor = cursor->getNext();
    }
    NodoRem = cursor->getNext();
    cursor->setNext(NodoRem->getNext());
    cursor = NodoRem;
    size--;
  }
}

// template <typename T>
// int Pilas<T>::search(T value)
// {
//   Nodo<T> *next = head;
//   int j{0};
//   while (next != nullptr)
//   {
//     if (next->getElement() == value)
//       return j;
//     next = next->getNext();
//     ++j;
//   }
//   return -1;
// }

template <typename T>
void Pilas<T>::print()
{
  if (size)
  {

    Nodo<T> *cursor = head;
    while (cursor != nullptr)
    {
      cout << cursor->getElement() << "->";
      cursor = cursor->getNext();
    }
    cout << endl;
  }
  else
    cout << "No existen elementos en nuestra lista" << endl;
}