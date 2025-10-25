//Challenge 8 : Copie d'un Tableau

#include <stdio.h>

int main()
{

    int size;

    printf("give use the size of your array : ");
    scanf("%d" , &size );
    int tab[size] , c_tab[size] ;


    for (int i = 0; i < size; i++)
    {
        printf("give the int number %d : ", i + 1);
        scanf("%d", &tab[i]);
        c_tab[i] = tab[i] ;

    }

    printf("coping ...\n");
    printf("your original array is : ");     

    for (int i = 0; i < size; i++)
    {
        printf("%d " , tab[i]);
    }

    printf("\nyour copied array is : ");     

    for (int i = 0; i < size; i++)
    {
        printf("%d " , c_tab[i]);
    }

    return 0;
}