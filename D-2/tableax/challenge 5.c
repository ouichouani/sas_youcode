//Challenge 5 : Trouver le Minimum

#include <stdio.h>

int main()
{
    int tab[5] ;

    for (int i = 0; i < 5; i++)
    {
        printf("give the int number %d : " );
        scanf("%d" ,  & tab[i]);
    }

    int minimum = tab[0] ;
    
    for (int i = 1; i < 5; i++)
    {
       if (minimum > tab[i]) minimum = tab[i];
    }

    printf("the min int in your array is : %d" , minimum);
    
    return 0 ;
}
