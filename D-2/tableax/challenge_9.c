
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
        c_tab[size-1-i] = tab[i] ;

    }

    printf("REVERCING ...\n");
    printf("your original array is : ");     

    for (int i = 0; i < size; i++)
    {
        printf("%d " , tab[i]);
    }

    printf("\nyour reverced array is : ");     

    for (int i = 0; i < size; i++)
    {
        printf("%d " , c_tab[i]);
    }

    return 0;
}