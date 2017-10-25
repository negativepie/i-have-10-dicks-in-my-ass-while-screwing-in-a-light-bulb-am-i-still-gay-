#include "animal.h"
#include "hunter.h"

int hunter::nextID=1000;

hunter::hunter(){
	animalID=nextID;
	nextID++;
	name="defualthuntername";
	volume=0;
	kills=0;

}

hunter::hunter(std::string n, int v){
	nextID++;
	animalID=nextID;
	name=n;
	volume=v;
	kills=0;
}



std::string hunter::get_name(){
	return "Hunter: "+name;
}



void hunter::set_kills(int kill){
	kills=kill;
}

int hunter::get_kills(){
	return kills;
}

