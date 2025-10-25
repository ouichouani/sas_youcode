// Challenge 3 : Tri par Sélection
// Écrivez un programme C qui implémente l'algorithme de tri par sélection pour trier un tableau d'entiers.
// Affichez le tableau avant et après le tri.
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

int tri_insertion(int array[] , int i , int size){

        if(i <= 0) return 0 ;

        for( i  ; i < size ; i++){
        if(array[i] < array[i-1]){
            int temp = array[i];
            array[i] = array[i-1] ;
            array[i-1] =temp ;

            tri_insertion(array , i - 1 , size) ;

        }   
    }
}

int main(){

    int array [] = {1 , 0 , 52 , 33 , 3 , 22 , 2 } ;
    int size = sizeof(array) / 4 ;

    print_array(array , sizeof(array) / 4 );
    tri_insertion(array , 1 , size) ; //if it works , don't tuch it hhhh
    print_array(array , sizeof(array) / 4 );


    return 0 ;
}