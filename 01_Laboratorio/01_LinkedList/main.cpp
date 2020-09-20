#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
  // LinkedList<char> charlis('Z');
  LinkedList<char> charlis;
  charlis.insert('A', 0);
  charlis.insert('B', 1);
  charlis.remove(0);
  charlis.remove(0);
  charlis.remove(0);
  charlis.remove(0);
  charlis.remove(0);
  charlis.print();

  return 0;
}
