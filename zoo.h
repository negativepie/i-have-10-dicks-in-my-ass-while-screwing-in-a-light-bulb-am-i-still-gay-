#ifndef ZOO_H
#define ZOO_H

#include "animal.h"

class zoo{
public:
	zoo();
	zoo(std::string n,int cows,int lions);
	~zoo();

	std::string get_name();
	int get_number_of_animals();
	animal** get_animals();
private:
	std::string name;
	int number_of_animals;
	animal **animals;
};

#endif