// Challenge 2 : Recherche Binaire
// Écrivez un programme C qui implémente l'algorithme de recherche binaire
// pour trouver un élément dans un tableau d'entiers trié. Affichez l'index
// de l'élément recherché ou un message indiquant que l'élément n'est pas trouvé

#include <stdio.h>

void print_array(int array[], int size)
{

    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
        if (i < size - 1)
        {
            printf(",");
        }
    }
    printf("]\n");
}

int Recherche_binaire_int(int array[], int size, int nbr, int middle)
{
    //WHENE THE NUMBER 
    // middle += middle % 2 ;

    if(middle == 1){

        if (array[1] == nbr){
            return 1;
        }else if (array[0] == nbr){
            return 0;
        }else{
            return -1;
        }
    }

        if(middle >= size){

        if (array[size - 1] == nbr){
            return size - 1;
        }else if(array[size - 2] == nbr) {
            return size - 2;
        
        }else{
            return -1;
        }
    }


    if ((middle == size || middle == 0 ) && nbr != array[middle]){
        return -1;
    }

    if (nbr == array[middle])
    {
        return middle;
    }
    else if (nbr < array[middle])
    {
        printf("- \n");
        Recherche_binaire_int(array, size, nbr, middle - middle / 2);
    }
    else
    {
        printf("+ \n");
        Recherche_binaire_int(array, size, nbr, middle + middle / 2);
    }
}

int main()
{

    int array[] = {2, 3, 4, 6, 7, 8  , 9} ;
    int size = sizeof(array) / 4;
    int nbr;
    int middle = 3;

    print_array(array, size);
    printf("recherch par un nombre dans ce tablaux : ");
    scanf("%d", &nbr);

    int result = Recherche_binaire_int(array, size, nbr, middle);
    printf("%d", result);

    return 0;
}