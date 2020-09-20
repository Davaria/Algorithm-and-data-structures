#include <iostream>
#include "./src/CircularDoubleLinkedList.cpp"
#include "./src/Nodo.cpp"
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

  // CircularDoubleLinkedList<char> charlis('A');
  CircularDoubleLinkedList<char> charlis;
  charlis.insert('A', 0);
  charlis.insert('B', 0);
  charlis.insert('C', 1);
  charlis.print();

  
  charlis.print();
  // charlis.remove(0);
  // charlis.remove(0);
  // charlis.remove(0);
  // charlis.remove(0);
  // charlis.insert('A', 0);
  // charlis.insert('B', 1);
  return 0;
}
