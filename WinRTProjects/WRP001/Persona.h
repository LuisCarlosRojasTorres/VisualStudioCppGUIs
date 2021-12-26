#pragma once
#include <string>

class Persona
{
private:
	std::string name;
	std::string surname;

public:
	Persona();
	void setName(std::string name);
	void setSurname(std::string surname);

	std::string getName();
	std::string getSurname();	
};

