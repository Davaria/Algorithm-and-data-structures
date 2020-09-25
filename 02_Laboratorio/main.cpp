#include <iostream>
#include "./Store/src/Store.cpp"
using namespace std;

int menu(Store &);

int main(int argc, char const *argv[])
{
  Store tienda;
  menu(tienda);
  return 0;
}

int menu(Store &store)
{
  for (;;)
  {
    store;
    int option{0}, optionExit{0};
    ;
    cout << "1. Añadir libro:" << endl;
    cout << "2. Borrar libro:" << endl;
    cout << "3. Buscar por ISBN:" << endl;
    cout << "4. Buscar por titulo:" << endl;
    cout << "5. Buscar por autor:" << endl;
    cout << "6. Mostrar todos los libros:" << endl;
    cout << "7. Salir" << endl;
    cout << "Opcion escogida : ";
    cin >> option;

    switch (option)
    {
    case 1:
      cout << endl;
      store.addBook();
      cout << endl;
      break;
    case 2:
      cout << endl;
      store.deleteBook();
      cout << endl;
      break;
    case 3:
      cout << endl;
      store.searchBookByISBN();
      cout << endl;
      break;
    case 4:
      cout << endl;
      store.searchBookByTitle();
      cout << endl;
      break;
    case 5:
      cout << endl;
      store.searchBookByAuthor();
      cout << endl;
      break;
    case 6:
      cout << endl;
      store.showAllBook();
      cout << endl;
      break;
    case 7:
      cout << "Desea culminar el programa ¿?" << endl;
      cout << "(1) -> Si" << endl;
      cout << "(2) -> No" << endl;
      cin >> optionExit;
      if (optionExit == 1)
        return 0;
      else
        return menu(store);
    default:
      cout << "\n\nOpcion incorrecta " << endl;
      return menu(store);
    }
  }
}