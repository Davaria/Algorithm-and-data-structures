#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
#include "./Author.h"
#include "../../../LinkedList/src/LinkedList.cpp"
#include "../../../LinkedList/src/Nodo.cpp"
using namespace std;

class Book
{
  string isbn;
  string title;
  int age;
  string editorial;
  string summary;
  LinkedList<Author> listAuthor;

public:
  Book();
  string getIsbn();
  void setIsbn(string);
  void setTitle(string);
  void setAge(int);
  void setEditorial(string);
  void setSummary(string);
  void setAuthor(string, string);
  string getTitle();
  int getAge();
  string getEditorial();
  string getSummary();
  // string getFullName();
  void print();
  friend ostream &operator<<(ostream &output, const Book &);
  int getSizeAuthors();
  Nodo<Author> *getAuthors();
};

#endif