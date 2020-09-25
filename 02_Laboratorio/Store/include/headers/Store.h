#ifndef STORE_H
#define STORE_H
#include "string"
#include "../../../Libro/src/Book.cpp"
using namespace std;

class Store
{
    LinkedList<Book> listBook;

public:
    void addBook();
    void deleteBook();
    void searchBookByISBN();
    void searchBookByTitle();
    void searchBookByAuthor();
    void showAllBook();
};

#endif