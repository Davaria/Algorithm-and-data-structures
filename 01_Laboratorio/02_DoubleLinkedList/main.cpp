#include <iostream>
#include "./src/DoubleLinkedList.cpp"
#include "./src/Nodo.cpp"
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

  DoubleLinkedList<char> charlis;
  charlis.insert('C', 1000);
  charlis.insert('C', 10000000);
  charlis.print();

  // charlis.remove(0);
  // charlis.print();

  // charlis.remove(10);
  // charlis.print();

  // charlis.insert('D', 10);
  // charlis.insert('Q', 100);
  // cout << charlis.search('A') << endl;
  // charlis.remove(100);
  // charlis.print();

  // charlis.insert('D', 100);
  // charlis.print();
  // charlis.print();
  // charlis.remove(0);
  // charlis.print();
  // charlis.remove(2);
  // charlis.remove(10);
  // charlis.print();
  return 0;
}
