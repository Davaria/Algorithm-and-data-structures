#include <iostream>
#include "./src/Book.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Book bookcito;
  bookcito.setIsbn("12345678");
  bookcito.setAge(1998);
  bookcito.setTitle("Un soldado caido");
  bookcito.setEditorial("Peru 21");
  bookcito.setSummary("El destino es mas que una palabra sin significado ...");
  bookcito.setAuthor("Luis", "Davaria");
  bookcito.setAuthor("Juan", "Camilo");
  // bookcito.print();
  return 0;
}