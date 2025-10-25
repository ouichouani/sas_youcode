
#include <stdio.h>

int main(){

    int nombre , resultas = 0 ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);
        
    for(int i = 1 ; i < nombre + 1 ; i++){
        resultas += i ;
    }
    printf("la somme de %d nombre entier est : %d\n" , nombre , resultas ) ;

    return 0 ;

}