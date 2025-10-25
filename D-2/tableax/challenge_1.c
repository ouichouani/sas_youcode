//Challenge 1 : Initialisation et Affichage

#include <stdio.h>

int main()
{
    int tab[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("int number %d is : %d \n", i , tab[5-i]);
    }
    return 0 ;
}