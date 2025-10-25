
#include <stdio.h>

int main(){

    int nombre , resultas = 1 ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);
        
    for(int i = nombre ; i > 0 ; i--){
        resultas *= i ;
    }
    printf("le factorielle de %d est : %d\n" , nombre , resultas ) ;

    return 0 ;

}