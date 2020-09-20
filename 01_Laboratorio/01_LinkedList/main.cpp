#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
  LinkedList<char> charlis;
  charlis.insert('A', 0);
  LinkedList<int> intlis;
  intlis.insert(10, 3);
  return 0;
}
