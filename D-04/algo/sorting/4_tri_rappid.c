//Challenge 4 : Tri Rapide
// Écrivez un programme C qui implémente l'algorithme de tri
// rapide pour trier un tableau d'entiers. Affichez le tableau avant et après le tri.

#include <stdio.h>

void print_array(int array[] , int size)
{

    printf("[");
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", array[i]);
        if (i < size - 1){
            printf(",");
        }
    }
    printf("]\n");
}

void fast_sorting(int pivot_index, int array[] , int size){
    int pivot = array[pivot_index] ; //get the value of pivot
    int array_left[ size];
    int array_right[size];

    for(int i = 0 ; i < size ; i++){

        if(array[i] <= pivot){
            // int
        }else{

        }
    }
}


int main(){

    int array [] = {1 , 0 , 52 , 33 , 3 , 22 , 2 } ;
    int size = sizeof(array) / 4 ;
    int pivot_index = size/2  ;
    return 0 ;
}