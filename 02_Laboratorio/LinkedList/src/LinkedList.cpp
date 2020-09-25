#include "../include/headers/LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
  head = nullptr;
  size = 0;
}

template <typename T>
LinkedList<T>::LinkedList(T value)
{
  head = new Nodo<T>(value);
  size = 1;
}

// template <typename T>
// LinkedList<T>::~LinkedList()
// {
//   Nodo<T> *cursor;
//   while (head != nullptr)
//   {
//     cursor = head;
//     cursor = head->getNext();
//     delete cursor;
//   }
// }

template <typename T>
void LinkedList<T>::insert(T value, int pos)
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
      if (account++ == pos)
        break;
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
void LinkedList<T>::remove(int pos)
{
  Nodo<T> *cursor = head;
  Nodo<T> *NodoRem;
  if (!size)
    cout << "No hay elementos en nuestro lista!!" << endl;
  else if (pos == 0 || size == 1)
  {
    head = head->getNext();
    delete cursor;
    cursor = nullptr;
    size--;
  }
  else if (pos > 0)
  {
    int account{0};
    if (size <= pos)
      pos = size - 1;
    while (cursor != nullptr)
    {
      if (++account == pos)
        break;
      cursor = cursor->getNext();
    }
    NodoRem = cursor->getNext();
    cursor->setNext(NodoRem->getNext());
    cursor = NodoRem;
    size--;
  }
}

template <typename T>
int LinkedList<T>::search(T value)
{
  Nodo<T> *next = head;
  int j{0};
  while (next != nullptr)
  {
    if (next->getElement() == value)
      return j;
    next = next->getNext();
    ++j;
  }
  return -1;
}

template <typename T>
void LinkedList<T>::print()
{
  if (size)
  {

    Nodo<T> *cursor = head;
    while (cursor != nullptr)
    {
      cout << cursor->getElement() << " ";
      cursor = cursor->getNext();
    }
    cout << endl;
  }
  else
    cout << "No existen elementos en nuestra lista" << endl;
}

template <typename T>
int LinkedList<T>::getSize()
{
  return this->size;
}

template <typename T>
Nodo<T> *LinkedList<T>::getHead()
{
  return head;
};