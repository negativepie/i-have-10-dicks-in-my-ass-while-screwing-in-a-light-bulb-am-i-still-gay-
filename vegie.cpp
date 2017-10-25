#include "animal.h"
#include "vegie.h"

int vegie::nextID=100;

vegie::vegie(){
	animalID=nextID;
	nextID++;
	name="defualtvegiename";
	volume=0;
	favourite_food="grass";

}

vegie::vegie(std::string n, int v){
	animalID=nextID;
	nextID++;
	name=n;
	v=volume;
	favourite_food="grass";
}



std::string vegie::get_name(){
	return "Safe: "+name;
}



void vegie::set_favourite_food(std::string food){
	favourite_food=food;
}

std::string vegie::get_favourite_food(){
	return favourite_food;
}

