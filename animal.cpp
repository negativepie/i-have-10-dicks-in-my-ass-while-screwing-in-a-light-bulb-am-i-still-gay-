#include "animal.h"
#include <iostream>

animal::animal(){
	animalID++;
	name="defaultname";
	volume=0;
}

animal::animal(std::string n, int v){
	animalID++;
	name=n;
	volume=v;
}



void animal::set_name(std::string n){
	name=n;
}

void animal::set_volume(int v){
	volume=v;
}



std::string animal::get_name(){

}

int animal::get_animalID(){
	return animalID;
}

int animal::get_volume(){
	return volume;
}