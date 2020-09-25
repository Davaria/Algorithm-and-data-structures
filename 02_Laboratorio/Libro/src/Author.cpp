#include "../include/headers/Author.h"

Author::Author()
{
	name = " ";
	lastName = " ";
}

Author::Author(string name, string lastName)
{
	this->name = name;
	this->lastName = lastName;
}

string Author::getName()
{
	return name;
}

void Author::setName(string name)
{
	this->name = name;
}

string Author::getLastName()
{
	return lastName;
}

void Author::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Author::print()
{
	cout << "\t" << this->name << " " << this->lastName << endl;
}

string Author::getFullName()
{
	string fullName = this->getName() + this->getLastName();
	return fullName;
}

ostream &operator<<(ostream &output, const Author &author)
{
	output << author.name << " " << author.lastName << endl;
	return output;
}