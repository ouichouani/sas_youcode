//Challenge 6 : Multiplication des Éléments

#include <stdio.h>
int main(){

    int factor; 
    printf("give the factor : " );
    scanf("%d" , & factor);

    int size ;  // will take the saze of the array
    printf("give a size fo your array : " );
    scanf( "%d" , & size);

    int tab[size] ;

    for (int i = 0; i < size; i++)
    {
        printf("give the int number %d : " );
        scanf("%d" ,  & tab[i]);
    }

    print("your table's numbers after multiplication with %d are : \n" , factor) ;

    for (int i = 0; i < size; i++)
    {
        tab[i] *= factor ;
        printf(" - %d", tab[i] );
    }

    
    return 0 ;
}
