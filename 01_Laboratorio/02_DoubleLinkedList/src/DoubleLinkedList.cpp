#include "../include/headers/DoubleLinkedList.h"

template <typename T>
DoubleLinkedList<T>::DoubleLinkedList()
{
  head = nullptr;
  tail = nullptr;
  size = 0;
}

template <typename T>
DoubleLinkedList<T>::DoubleLinkedList(T value)
{
  head = new Nodo<T>(value);
  tail = new Nodo<T>(value);
  size = 1;
}

template <typename T>
void DoubleLinkedList<T>::insert(T value, int pos)
{
  Nodo<T> *cursor = head;
  Nodo<T> *newNode = new Nodo<T>(value);
  Nodo<T> *after = nullptr;
  if (pos == 0 || size == 0 || size < pos)
  {
    if (size == 0)
    {
      head = newNode;
      tail = newNode;
      size++;
    }
    else if (size < pos)
    {
      tail = last();
      newNode->setPrev(tail);
      tail->setNext(newNode);
      tail = newNode;
      size++;
    }
    else if (pos == 0)
    {
      newNode->setNext(head);
      head->setPrev(newNode);
      head = newNode;
      size++;
    }
  }
  else
  {
    int account{0};
    if (pos > size)
      pos = size - 1;
    cout << "El tamaño de la posicion es: " << pos << endl;
    while (cursor != nullptr)
    {
      if (++account == pos)
        break;
      after = cursor;
      cursor = cursor->getNext();
    }

    newNode->setNext(cursor->getNext());
    after = newNode->getNext();
    ;
    after->setPrev(newNode);
    cursor->setNext(newNode);
    newNode->setPrev(cursor);
    size++;
  }
}

template <typename T>
void DoubleLinkedList<T>::remove(int pos)
{
  Nodo<T> *cursor = head;
  Nodo<T> *NodoRem;
  if (pos == 0 || size == 1)
  {
    head = head->getNext();
    head->setPrev(nullptr);
    delete cursor;
    cursor = nullptr;
    size--;
  }
  else if (pos > 0)
  {
    int account{0};
    if (pos > size)
      pos = size - 1;
    cout << pos << endl;
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
int DoubleLinkedList<T>::search(T value)
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
void DoubleLinkedList<T>::print()
{
  Nodo<T> *cursor = head;
  cout << "El tamano de la lista " << this->size << endl;
  while (cursor != nullptr)
  {
    cout << cursor->getElement() << " ";
    cursor = cursor->getNext();
  }
  cout << endl;
}

template <typename T>
Nodo<T> *DoubleLinkedList<T>::last()
{
  Nodo<T> *next = head;
  Nodo<T> *cursor;
  while (next != nullptr)
  {
    cursor = next;
    next = next->getNext();
  }
  return cursor;
}