#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "zoo.h"
#include "sort_by_animalID.h"
#include <iostream>


int main(){
	zoo newzoo = zoo("a zoo",2,2);
	sort_by_animalID sorterID = sort_by_animalID();

	vegie* temp1 = new vegie("Daisy1",100);
	vegie* temp2 = new vegie("Daisy2",100);
	vegie* temp3 = new vegie("Daisy3",100);
	vegie* temp4 = new vegie("Daisy4",100);

	animal** animarr = new animal*[4];
	animarr[0]=temp1;
	animarr[1]=temp3;
	animarr[2]=temp4;
	animarr[3]=temp2;
	for(int i=0;i<4;i++){
		std::cout<<animarr[i]->get_name()<<std::endl<<std::endl;
		std::cout<<animarr[i]->get_animalID()<<std::endl<<std::endl;
	}
	sorterID.sort(animarr,4);
	for(int i=0;i<4;i++){
		std::cout<<animarr[i]->get_name()<<std::endl<<std::endl;
	}
	return 0;
}