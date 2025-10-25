// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int tab[5];

    for (int i = 0; i < 5; i++)
    {
        printf("give the int number %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("sorting ...\n");

    for (int i = 0; i < 5; i++)
    {
        for (int J = 0; J < 5; J++)
        {
            if (tab[J] > tab[J + 1])
            {
                int x = tab[J];
                tab[J] = tab[J + 1];
                tab[J + 1] = x;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("SORTED ARRAY N° %d : %d \n", i + 1, tab[i]);
    }

    return 0;
}