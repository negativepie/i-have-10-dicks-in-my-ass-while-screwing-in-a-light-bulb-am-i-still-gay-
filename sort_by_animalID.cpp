#include "sort_by_animalID.h"
#include <utility>
#include <stdlib.h>

void sort_by_animalID::sort(animal **animals,int n){
    for(int i=0;i<n;i++){
        int j=i;
            while((j>0)&&(animals[j-1]->get_animalID()>animals[j]->get_animalID()))
            {
                std::swap(animals[j],animals[j-1]);
                j=j-1;
            }
    }
}