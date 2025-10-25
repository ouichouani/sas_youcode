
#include <stdio.h>

int main(){

    int nombre , pow , resultas = 1 ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);

    printf("donner un puissance : ") ;
    scanf("%d" , &pow);

    for(int i = 0 ; i < pow  ; i++ ){
        resultas *= nombre ; 
    }

    printf("la resultat de %d^%d est : %d" , nombre , pow , resultas) ;

    return 0 ;

}