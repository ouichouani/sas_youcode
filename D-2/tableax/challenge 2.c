//Challenge 2 : Saisie et Affichage des Éléments


#include <stdio.h>

int main(){

    int size ;  // will take the saze of the array
    printf("give the size fo your array : " );
    scanf('%d' , & size);

    int tab[size] ;

    for (int i = 0; i < size; i++)
    {
        printf("give the int number %d : " );
        scanf('%d' ,  & tab[i]);
    }

    printf("your array numbers are") ;

    for (int i = 0; i < size; i++)
    {
        printf("    - int number %d is : %d \n", i , tab[i]);
    }
    return 0 ;
}
