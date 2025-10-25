// Selection Sort is a sorting method where you repeatedly:

// 1. Select the smallest (or largest) element from the unsorted part of the array.
// 2. Swap it with the first element of the unsorted part.
// 3. Move the boundary of the sorted part one step forward.
// 4. Repeat until the whole array is sorted.

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


int main(){


    int array [] = {1 , 0 , 52 , 33 , 3 , 22 , 2 } ;

    print_array(array , sizeof(array) / 4 );


    int min , temp = 0 , index , boundary = 0;

    
    for(int i = 0 ; i < sizeof(array)/4 ; i++){

        min = array[i];

        for(int j = boundary ; j < sizeof(array)/4 ; j++ ){

            if(min > array[j]){
                min = array[j] ;
                index = j ;
            }

        }

        temp = array[i] ;
        array[i] = min ;
        array[index] = temp ;

        boundary++ ;

    }
    
    print_array(array , sizeof(array) / 4 );




    return 0 ;
}