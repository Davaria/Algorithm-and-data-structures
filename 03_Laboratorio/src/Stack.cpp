#include "../include/headers/Stack.h"

template <typename T>
Stack<T>::Stack()
{
  head = nullptr;
  last = nullptr;
}

template <typename T>
Stack<T>::Stack(T value)
{
  head = new Nodo<T>(value);
  last = new Nodo<T>(value);
}

// Destructor de la pila
template <typename T>
Stack<T>::~Stack()
{
  while (this->head)
    pop();
}

// Agregamos valores a la  pila
template <typename T>
void Stack<T>::push(T value)
{
  Nodo<T> *newNodo = new Nodo<T>(value);
  // Primer caso: Si nuestra pila esta vacia
  if (!this->head)
  {
    head = new Nodo<T>(value);
    last = new Nodo<T>(value);
  }
  // Primer caso: Nuestra pila contiene elementos
  else
  {
    Nodo<T> *current = head;
    Nodo<T> *prev = nullptr;
    while (current != nullptr)
    {
      prev = current;
      current = current->getNext();
    }
    prev->setNext(newNodo);
    newNodo->setNext(current);
    last = newNodo;
  }
}
// Remueve el ultimo elemento de nuestra pila
template <typename T>
T Stack<T>::pop()
{
  Nodo<T> *current = head;
  T valueRemoved{-1};
  // En caso de que no halla elemento en nuestra pila retornara -1
  if (this->head == nullptr)
    return valueRemoved;
  // Si el primer y ultimo elemento son iguales es porque solo existe un elemento en nuestra pila entonces para eliminar un unico elemento tiene otro procedimiento
  else if (current->getElement() == this->last->getElement())
  {
    valueRemoved = current->getElement();
    head = last = head->getNext();
    delete current;
    current = nullptr;
    return valueRemoved;
  }
  // Existen varios elementos hacemos uso de un while para poder eliminar un ultimo elemento de la pila
  else
  {
    Nodo<T> *tmp;
    while (current != this->last)
    {
      tmp = current;
      current = current->getNext();
    }
    valueRemoved = last->getElement();
    current = last = tmp;
    current->setNext(nullptr);

    return valueRemoved;
  }
}

// Impresion de los valores de nuestra pila
template <typename T>
void Stack<T>::print()
{
  if (this->head)
  {
    Nodo<T> *current = head;
    while (current)
    {
      cout << current->getElement() << "->";
      current = current->getNext();
    }
    cout << endl;
  }
  else
    cout << "Not found values" << endl;
}

// Devolvemos el ultimo elemento de nuestra pila en caso de no que la pila este vacio retornara -1
template <typename T>
T Stack<T>::top()
{
  if (this->last)
    return this->last->getElement();
  return -1;
}

// Verificamos si la pila esta vacia
template <typename T>
bool Stack<T>::isEmpty()
{
  if (this->head)
    return false;
  return true;
}

