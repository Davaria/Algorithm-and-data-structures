#include "../include/headers/CircularDoubleLinkedList.h"

template <typename T>
CircularDoubleLinkedList<T>::CircularDoubleLinkedList()
{
  first = nullptr;
  last = nullptr;
  size = 0;
}

template <typename T>
CircularDoubleLinkedList<T>::CircularDoubleLinkedList(T value)
{
  Nodo<T> *newNode = new Nodo<T>(value);
  first = last = newNode;
  newNode->setPrev(last);
  newNode->setNext(first);
  size = 1;
}

template <typename T>
void CircularDoubleLinkedList<T>::insert(T value, int pos)
{
  Nodo<T> *cursor = first;
  Nodo<T> *newNode = new Nodo<T>(value);
  Nodo<T> *after = nullptr;
  if (pos == 0 || size == 0 || size <= pos)
  {
    if (!size)
    {
      first = last = newNode;
      newNode->setPrev(last);
      newNode->setNext(first);
      size++;
    }
    else if (pos == 0)
    {
      newNode->setNext(first);
      first->setPrev(newNode);
      newNode->setPrev(last);
      last->setNext(newNode);
      first = newNode;
      size++;
    }
    else if (size <= pos)
    {
      newNode->setPrev(last);
      last->setNext(newNode);
      newNode->setNext(first);
      first->setPrev(newNode);
      last = newNode;
      size++;
    }
  }
  else if (size > pos)
  {
    int account{0};
    do
    {
      if (++account == pos)
        break;
      after = cursor;
      cursor = cursor->getNext();
    } while (cursor != first);
    newNode->setNext(cursor->getNext());
    after = newNode->getNext();
    after->setPrev(newNode);
    cursor->setNext(newNode);
    newNode->setPrev(cursor);
    size++;
  }
}

template <typename T>
void CircularDoubleLinkedList<T>::remove(int pos)
{
  Nodo<T> *cursor = first;
  Nodo<T> *NodoRem;
  if (!size)
    cout << "No existe elementos en nuesta lista " << endl;
  else if (size == 1)
  {
    delete first;
    size--;
  }
  else if (pos == 0)
  {
    first = first->getNext();
    first->setPrev(last);
    last->setNext(first);
    delete cursor;
    size--;
  }
  else if (pos > 0)
  {
    int account{0};

    if (pos >= size)
      pos = size - 1;

    do
    {
      if (++account == pos)
        break;
      cursor = cursor->getNext();
    } while (cursor != first);
    NodoRem = cursor->getNext();
    cursor->setNext(NodoRem->getNext());
    NodoRem->setPrev(cursor);
    cursor = NodoRem;
    size--;
  }
}

template <typename T>
int CircularDoubleLinkedList<T>::search(T value)
{
  Nodo<T> *next = first;
  int j{0};
  do
  {
    if (next->getElement() == value)
      return j;
    next = next->getNext();
    ++j;
  } while (next != first);
  return -1;
}

template <typename T>
void CircularDoubleLinkedList<T>::print()
{
  if (size)
  {
    Nodo<T> *cursor = first;
    do
    {
      cout << cursor->getElement() << " ";
      cursor = cursor->getNext();
    } while (cursor != first);
    cout << endl;
  }
  else
    cout << "No existen elementos en nuestra lista" << endl;
}
