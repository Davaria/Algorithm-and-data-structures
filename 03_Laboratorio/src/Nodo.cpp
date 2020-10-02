#include "../include/headers/Nodo.h"
//  Constructor del nodo
template <typename T>
Nodo<T>::Nodo()
{
	next = nullptr;
}
//  Constructor del nodo
template <typename T>
Nodo<T>::Nodo(T value)
{
	elem = value;
	next = nullptr;
}
// Obtiene el dato almacenado del nodo
template <typename T>
T Nodo<T>::getElement()
{
	return elem;
}

// Cambiamos el valor el cual almacena del nodo por el cual enviemos por parametro
template <typename T>
void Nodo<T>::setElement(T value)
{
	elem = value;
}

// Obtenemos el puntero el cual apunta del nodo
template <typename T>
Nodo<T> *Nodo<T>::getNext()
{
	return next;
}

// Cambiamos el puntero el cual apunta del nodo por el cual enviemos por parametro
template <typename T>
void Nodo<T>::setNext(Nodo *n)
{
	next = n;
}
