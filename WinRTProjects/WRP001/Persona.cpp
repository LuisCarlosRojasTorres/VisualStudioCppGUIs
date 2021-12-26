#include "pch.h"
#include "Persona.h"

Persona::Persona()
{
	this->setName("");
	this->setSurname("");
}

void Persona::setName(std::string name)
{
	if (name.empty()) {
		this->name = "Empty";
	}
	else {
		this->name = name;
	}	
}

void Persona::setSurname(std::string surname)
{
	if (surname.empty()) {
		this->surname = "Empty";
	}
	else {
		this->surname = surname;
	}	
}

std::string Persona::getName()
{
	return this->name;
}

std::string Persona::getSurname()
{
	return this->surname;
}
