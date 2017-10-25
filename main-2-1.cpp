#include "animal.h"
#include "hunter.h"
#include <iostream>

int main(){
	hunter defhunt = hunter();
	std::cout<<defhunt.get_name()<<std::endl;
	std::cout<<defhunt.get_volume()<<std::endl;
	hunter newhunt = hunter("hunter",50);
	std::cout<<newhunt.get_name()<<std::endl;
	std::cout<<newhunt.get_volume()<<std::endl;
	std::cout<<newhunt.get_kills()<<std::endl;
	newhunt.set_kills(25);
	std::cout<<newhunt.get_kills()<<std::endl;
	std::cout<<newhunt.get_animalID()<<std::endl;
	
	return 0;
}