#include "./../include/headers/Store.h"

void Store::addBook()
{
  Book bookcito;
  string ISBN, title, editorial, name, lastName, summary;
  int age{0}, option{0};
  cout << "Ingresa el codigo: " << endl;
  cin >> ISBN;
  cout << "Ingresa el año: " << endl;
  cin >> age;

  cout << "Ingresa el titulo: " << endl;
  cin.ignore();
  getline(cin, title);

  cout << "Ingresa la editorial: " << endl;
  cin.ignore();
  getline(cin, editorial);

  cout << "Ingresa el resumen: " << endl;
  cin.ignore();
  getline(cin, summary);

  cout << "Ingresa el autor: " << endl;
  cout << "Nombre: ";
  cin >> name;
  cout << "Apellido: ";
  cin >> lastName;

  bookcito.setIsbn(ISBN);
  bookcito.setAge(age);
  bookcito.setTitle(title);
  bookcito.setEditorial(editorial);
  bookcito.setSummary(summary);
  bookcito.setAuthor(name, lastName);

  do
  {
    cout << "Desea añadir otro autor ???" << endl;
    cout << "1 -> SI " << endl;
    cout << "2 -> NO " << endl;
    cin >> option;
    if (option == 2 || option >= 3)
      break;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, name);

    cout << "Apellido: ";
    cin.ignore();
    getline(cin, lastName);

    bookcito.setAuthor(name, lastName);
  } while (option);

  listBook.insert(bookcito, 100);
}

void Store::deleteBook()
{
  int position{0};
  cout << "Ingrese la posicion a borrar???\n Recuerda que la posicion empieza desde 1 " << endl;
  cin >> position;
  listBook.remove(--position);
}
void Store::searchBookByISBN()
{
  string ISBN;
  cout << "Ingresa Codigo: " << endl;
  cin.ignore();
  getline(cin, ISBN);
  cout << "-------------------------" << endl;
  Nodo<Book> *book = listBook.getHead();
  Nodo<Author> *author;
  while (book != nullptr)
  {
    if (book->getElement().getIsbn() == ISBN)
    {
      cout << "\tCodigo encontrado: " << endl;
      cout << "-------------------------" << endl;
      cout << "\tInformacion encontrada: " << endl;
      cout << "-------------------------" << endl;
      book->getElement().print();
      author = book->getElement().getAuthors();
      cout << "Autores: " << endl;
      while (author != nullptr)
      {
        author->getElement().print();
        author = author->getNext();
      }
      cout << "-------------------------" << endl;
    }
    book = book->getNext();
  }
}

void Store::searchBookByTitle()
{
  string title;
  int pos{0};
  cout << "Ingresa el titulo: " << endl;
  cin.ignore();
  getline(cin, title);
  cout << "-------------------------" << endl;
  Nodo<Book> *book = listBook.getHead();
  Nodo<Author> *author;
  while (book != nullptr)
  {
    if (book->getElement().getTitle() == title)
    {
      cout << "Titulo encontrado: " << endl;
      cout << "-------------------------" << endl;
      cout << "\tInformacion encontrada: " << endl;
      cout << "-------------------------" << endl;
      book->getElement().print();
      author = book->getElement().getAuthors();
      cout << "Autores: " << endl;
      while (author != nullptr)
      {
        author->getElement().print();
        author = author->getNext();
      }
      cout << "-------------------------" << endl;
    }
    book = book->getNext();
  }
}
void Store::searchBookByAuthor()
{
  bool status;
  string name, lastName, fullName;
  int pos{0};
  cout << "Ingresa el nombre: " << endl;
  cin >> name;
  cout << "Ingresa el apellido: " << endl;
  cin >> lastName;
  fullName = name + lastName;

  Nodo<Book> *book = listBook.getHead();
  Nodo<Author> *author;
  while (book != nullptr)
  {
    author = book->getElement().getAuthors();
    while (author != nullptr)
    {
      if (author->getElement().getName() == name && author->getElement().getLastName() == lastName)
      {
        status = true;
        break;
      }

      author = author->getNext();
    }
    if (status)
      break;
    pos++;
    book = book->getNext();
  }
  if (pos >= 0 && pos <= listBook.getSize())
  {
    int account{0};
    // cout << "Entramos " << endl;
    book = listBook.getHead();
    cout << "-------------------------" << endl;
    while (book != nullptr)
    {
      // cout << "Posicion " << pos << endl;
      // cout << "Contador " << account << endl;
      if (account++ == pos)
      {
        author = book->getElement().getAuthors();
        cout << "Autor encontrado: " << endl;
        cout << "-------------------------" << endl;
        cout << "\tInformacion encontrada: " << endl;
        cout << "-------------------------" << endl;
        book->getElement().print();
        cout << "Autores: " << endl;
        while (author != nullptr)
        {
          author->getElement().print();
          author = author->getNext();
        }
        cout << "-------------------------" << endl;
      }
      // account++;
      book = book->getNext();
    }
  }
}
void Store::showAllBook()
{
  cout << "-------------------------" << endl;
  Nodo<Book> *book = listBook.getHead();
  Nodo<Author> *author;

  while (book != nullptr)
  {
    book->getElement().print();
    author = book->getElement().getAuthors();
    cout << "Autores: " << endl;
    while (author != nullptr)
    {
      author->getElement().print();
      author = author->getNext();
    }
    book = book->getNext();
    cout << "-------------------------" << endl;
  }
  cout << endl;
}