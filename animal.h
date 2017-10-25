#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class animal{
	public:
	animal();
	animal(std::string n, int v);   // creates an animal with name n and body volume v.
                          	   		// animals are allocated a unique ID on creation

	void set_name(std::string n);
	void set_volume(int v);

	virtual std::string get_name()=0;
    int get_animalID();
	int get_volume();

	protected:
	std::string name ;        		// the animal's name
	int animalID ;          		// the animal's unique ID
	int volume ;              		// the volume of the animal's body

};

#endif 