//Challenge 4 : Trouver le Maximum

#include <stdio.h>

int main()
{
    int tab[5] ;

    for (int i = 0; i < 5; i++)
    {
        printf("give the int number %d : " );
        scanf('%d' ,  & tab[i]);
    }

    int maximum = tab[0] ;
    
    for (int i = 1; i < 5; i++)
    {
       if (maximum < tab[i]) maximum = tab[i];
    }

    printf("the max int in your array is : %d" , maximum);
    
    return 0 ;
}
