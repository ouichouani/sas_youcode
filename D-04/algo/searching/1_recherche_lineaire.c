//Challenge 1 : Recherche Linéaire
// Écrivez un programme C qui implémente l'algorithme de recherche
// linéaire pour trouver un élément dans un tableau d'entiers. Affichez si l'élément est trouvé ou non.

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


int Recherche_lineaire_int( int array[] ,int size ,int nbr ){

    for(int i = 0 ; i < size; i++ ){
        if(array[i]== nbr){
            return i ;
        }
    }
    return -1 ;
}

int main(){

    int array[] = {1, 0, 52, 33, 3, 22, 2};
    int size = sizeof(array)/4;
    int nbr;
    
    print_array(array ,size);
    printf("recherch par un nombre dans ce tablaux : ");
    scanf("%d" , &nbr )  ;
    


    int index = Recherche_lineaire_int( array , size ,nbr );
    if(index>=0){
        printf("index : %d , valuer %d \n" ,index ,array[index]) ;
    }else{
        printf("l\'element n\'est pas trouver\n") ;

    }

    return 0 ;
}