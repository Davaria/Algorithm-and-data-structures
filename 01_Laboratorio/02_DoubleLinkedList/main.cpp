#include <iostream>
#include "./src/DoubleLinkedList.cpp"
#include "./src/Nodo.cpp"
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

  DoubleLinkedList<char> charlis('A');
  charlis.insert('C', 0);
  charlis.print();
  charlis.insert('X', 1);
  charlis.print();
  charlis.insert('D', 1);
  charlis.print();
  charlis.insert('Z', 200);
  charlis.print();
  charlis.remove(0);
  charlis.print();
  charlis.remove(100);
  charlis.print();

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
