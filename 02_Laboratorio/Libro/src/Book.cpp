#include "../include/headers/Book.h"

Book::Book()
{
  isbn = "";
  title = "";
  age = 0;
  editorial = "";
  summary = "";
}

string Book::getIsbn()
{
  return isbn;
}
void Book::setIsbn(string isbn)
{
  this->isbn = isbn;
}
string Book::getTitle()
{
  return title;
}
void Book::setTitle(string title)
{
  this->title = title;
}
int Book::getAge()
{
  return age;
}
void Book::setAge(int age)
{
  this->age = age;
}
string Book::getEditorial()
{
  return editorial;
}
void Book::setEditorial(string editorial)
{
  this->editorial = editorial;
}
string Book::getSummary()
{
  return summary;
}
void Book::setSummary(string summary)
{
  this->summary = summary;
}

void Book::setAuthor(string name, string lastName)
{
  Author author(name, lastName);
  listAuthor.insert(author, this->getSizeAuthors());
}

void Book::print()
{
  cout << "Codigo: " << this->isbn << endl;
  cout << "Title: " << this->title << endl;
  cout << "Año: " << this->age << endl;
  cout << "Editorial: " << this->editorial << endl;
  cout << "Resumen: " << this->summary << endl;
}

ostream &operator<<(ostream &output, const Book &book)
{
  output << "Codigo: " << book.isbn << endl;
  output << "Title: " << book.title << endl;
  output << "Año: " << book.age << endl;
  output << "Editorial: " << book.editorial << endl;
  output << "Resumen: " << book.summary << endl;
  return output;
}

int Book::getSizeAuthors()
{
  return listAuthor.getSize();
}

Nodo<Author> *Book::getAuthors()
{
  return listAuthor.getHead();
}

// string Book::getFullName()
// {
//   return listAuthor.
// }
