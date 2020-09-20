#include "../include/headers/Nodo.h"
template <typename T>
Nodo<T>::Nodo()
{
	next = nullptr;
	prev = nullptr;
}
template <typename T>
Nodo<T>::Nodo(T value)
{
	elem = value;
	next = nullptr;
	prev = nullptr;
}

template <typename T>
T Nodo<T>::getElement()
{
	return elem;
}

template <typename T>
void Nodo<T>::setElement(T value)
{
	elem = value;
}
template <typename T>
Nodo<T> *Nodo<T>::getNext()
{
	return next;
}

template <typename T>
void Nodo<T>::setNext(Nodo *n)
{
	next = n;
}

template <typename T>
Nodo<T> *Nodo<T>::getPrev()
{
	return prev;
}

template <typename T>
void Nodo<T>::setPrev(Nodo *n)
{
	prev = n;
}