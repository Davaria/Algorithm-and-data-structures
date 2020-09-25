#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
using namespace std;

class Author
{
	string name;
	string lastName;

public:
	Author();
	Author(string, string);
	string getName();
	void setName(string);
	string getLastName();
	void setLastName(string);
	void print();
	string getFullName();
	friend ostream &operator<<(ostream &output, const Author &);
};

#endif