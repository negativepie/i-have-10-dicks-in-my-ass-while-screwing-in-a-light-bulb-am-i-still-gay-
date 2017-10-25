#include "animal.h"
#include "vegie.h"
#include <iostream>

int main(){
	vegie newveg = vegie("vegetable",50);
	std::cout<<newveg.get_name()<<std::endl;
	std::cout<<newveg.get_volume()<<std::endl;
	std::cout<<newveg.get_favourite_food()<<std::endl;
	return 0;
}