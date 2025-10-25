

//Challenge 3 : Somme des Éléments

#include <stdio.h>
int main(){

    int size ;  // will take the saze of the array
    int somme = 0 ;
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
        printf('%d', tab[i] );
        somme += tab[i] ;
    }
    print("and the total of thoes numbers are : %d " , somme) ;
    
    return 0 ;
}
