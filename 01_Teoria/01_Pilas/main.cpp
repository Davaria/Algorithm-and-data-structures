#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
#include "./src/Pilas.cpp"
#include "./src/Nodo.cpp"
using namespace std;

void test();
void exercise01();
void exercise02();
void exercise03();
void exercise04();
void exercise05();
void exercise06();
void exercise07();

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  /*Descomitear para ejecutar las funciones las cuales corresponden desde la a hasta f*/
  test();
  exercise01();
  exercise02();
  exercise03();
  exercise04();
  exercise05();
  exercise06();
  exercise07();

  return 0;
}

// void test()
// {
//   cout << "Testing" << endl;
//   LinkedList<int> charlis;
//   charlis.insert(106, 0);
//   charlis.insert(105, 0);
//   charlis.insert(104, 0);
//   charlis.insert(1000, 0);
//   charlis.insert(100, 0);
//   charlis.print();
// }

// void exercise01()
// {
//   cout << "Ejercicio N1" << endl;
//   LinkedList<char> charlis;
//   charlis.insert('B', 0);
//   charlis.insert('C', 1);
//   charlis.insert('D', 2);
//   charlis.insert('E', 3);
//   // Intersectar un elemento al inicio
//   charlis.insert('A', 0);
//   charlis.print(); //A
// }

// void exercise02()
// {
//   cout << "Ejercicio N2" << endl;
//   LinkedList<char> charlis;
//   charlis.insert('B', 0);
//   charlis.insert('C', 1);
//   charlis.insert('D', 2);
//   charlis.insert('E', 3);
//   // Insertar al final
//   charlis.insert('F', 10);
//   charlis.print(); //B C D E F
// }

// void exercise03()
// {
//   cout << "Ejercicio N3" << endl;
//   clock_t start, end;
//   start = clock();

//   LinkedList<int> intlis;
//   for (size_t i = 0; i < 10; i++)
//     intlis.insert(rand() % 51, rand() % 51);
//   intlis.print();

//   end = clock();
//   double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
//   cout << "Tiempo de ejecucion: " << fixed << time_taken << setprecision(5) << " segundos." << endl;
// }

// void exercise04()
// {
//   cout << "Ejercicio N4" << endl;
//   LinkedList<char> charlis;
//   charlis.insert('B', 0);
//   charlis.insert('C', 1);
//   charlis.insert('D', 2);
//   charlis.insert('E', 3);
//   charlis.remove(0);
//   charlis.print();
// }

// void exercise05()
// {
//   cout << "Ejercicio N5" << endl;
//   LinkedList<char> charlis;
//   charlis.insert('B', 0);
//   charlis.insert('C', 1);
//   charlis.insert('D', 2);
//   charlis.insert('E', 3);
//   charlis.remove(10);
//   charlis.print();
// }

// void exercise06()
// {
//   cout << "Ejercicio N6" << endl;
//   clock_t start, end;
//   start = clock();

//   LinkedList<int> intlis;
//   for (size_t i = 0; i < 10; i++)
//     intlis.insert(rand() % 51, rand() % 51);
//   intlis.print();

//   for (size_t i = 0; i < 10; i++)
//     intlis.remove(rand() % 51);
//   intlis.print();

//   end = clock();
//   double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
//   cout << "Tiempo de ejecucion: " << fixed << time_taken << setprecision(5) << " segundos." << endl;
// }

// void exercise07()
// {
//   cout << "Ejercicio N7" << endl;
//   clock_t start, end;
//   start = clock();

//   LinkedList<int> intlis;
//   for (size_t i = 0; i < 100; i++)
//     intlis.insert(rand() % 51, rand() % 51);
//   intlis.print();

//   for (size_t i = 0; i < 100; i++)
//     cout << intlis.search(rand() % 51) << " ";
//   cout << endl;

//   end = clock();
//   double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
//   cout << "Tiempo de ejecucion: " << fixed << time_taken << setprecision(5) << " segundos." << endl;
// }