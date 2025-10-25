// Challenge 5 : Fonction de Factorielle


#include <stdio.h>


int factorielle( int a ){
    int fact = 1;
    for (int i = a ; i > 0 ; i--){
        fact *= i ;
    }
}


int main(){
    printf("La fonction du numbre 5 est : %d", factorielle( 10 )) ;
    return 0;
}