#include "sort_by_name.h"
#include "stdlib.h"

void sort_by_name::sort(animal **animals,int n){
    for(int i=0;i<n;i++){
        int j=i;
            while((j>0)&&(animals[j-1]->get_name()>animals[j]->get_name()))
            {
                std::swap(animals[j],animals[j-1]);
                j=j-1;
            }
    }
}