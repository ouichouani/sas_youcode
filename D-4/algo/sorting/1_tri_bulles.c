
// Challenge 1 : Tri à Bulles

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

int main()
{

    int array[] = {1, 0, 52, 33, 3, 22, 2};

    print_array(array , sizeof(array) / 4 );

    for (int i = 0; i < (sizeof(array) / 4); i++)
    {
        if (i == sizeof(array) / 4 - 1){break;}

        for (int j = 0; j < sizeof(array) / 4; j++)
        {
            if (array[j] > array[j + 1])
            {
                array[j] = array[j] - array[j + 1];
                array[j + 1] = array[j + 1] + array[j];
                array[j] = array[j + 1] - array[j];
            }
        }
    }

    print_array(array , sizeof(array) / 4 );

    return 0;
}
