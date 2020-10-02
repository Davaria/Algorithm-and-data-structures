#include <iostream>
#include "./src/Stack.cpp"
using namespace std;

void menu();
bool isExpression(string);

int main(int argc, char const *argv[])
{
  menu();

  return 0;
}

void menu()
{
  int total{0}, value{0};
  Stack<int> pila;
  cout << "Cual es la cantidad total a ingresar: ";
  cin >> total;
  for (size_t i = 0; i < total; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> value;
    pila.push(value);
  }
  // Imprimir de manera inversa
  while (!pila.isEmpty())
  {
    cout << pila.top() << " ";
    pila.pop();
  }
  cout << endl;
  // Problema 2
  string expr;
  //expr = while (m<(n[8]+o)) { p = 7; 6=6;}
  //expr =  while (m<(n[8]+o)  p = 7; 6=6;}
  cout << "Ingresa su expresion: " << endl;
  getline(cin, expr);
  (isExpression(expr)) ? cout << "Correcto" << endl
                       : cout << "Incorrecto" << endl;
}

// Evaluamos si una expresion es correcta o no
bool isExpression(string expresion)
{
  // Creamos una pila de tipo char dado que ingresaremos caracteres de nuestra cadena exprexion
  Stack<char> s;
  int account{0};
  for (int i = 0; i < expresion.size(); i++)
  {
    if (expresion[i] == '{' || expresion[i] == '[' || expresion[i] == '(')
    {
      s.push(expresion[i]);
      account++;
    }
    else
    {
      if (expresion[i] == '}')
      {
        if (s.top() == '{')
        {
          account--;
          s.pop();
        }
        else
          return false;
      }
      else if (expresion[i] == ']')
      {
        if (s.top() == '[')
        {
          account--;
          s.pop();
        }
        else
          return false;
      }
      else if (expresion[i] == ')')
      {
        if (s.top() == '(')
        {
          account--;
          s.pop();
        }
        else
          return false;
      }
    }
  }

  if (account == 0)
    return true;

  else
    return false;
}