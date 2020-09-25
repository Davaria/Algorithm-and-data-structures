#include <iostream>
#include <sstream>
#include "./src/Store.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Store store;
  store.addBook();
  store.showAllBook();
  return 0;
}