#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "zoo.h"
#include <iostream>


int main(){
	zoo newzoo = zoo("a zoo",2,2);
	std::cout<<newzoo.get_name()<<std::endl;
	std::cout<<newzoo.get_number_of_animals()<<std::endl;
	newzoo.get_animals();
	return 0;
}