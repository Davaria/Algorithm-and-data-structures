#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
  LinkedList<char> charlis('Z');
  charlis.insert('C', 0);
  charlis.insert('X', 1);
  charlis.print();
  charlis.remove(0);
  charlis.print();
  charlis.remove(10);
  charlis.remove(10);
  charlis.print();
  // charlis.insert('D', 1);
  // charlis.insert('D', 10);
  // charlis.insert('B', 2);
  // charlis.print();
  // charlis.print();
  // charlis.remove(2);
  // charlis.remove(10);
  // charlis.print();
  return 0;
}
