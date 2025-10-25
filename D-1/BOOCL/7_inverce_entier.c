

#include <stdio.h>

int main(){

    int nombre , module = 0 , result = 0 ; // 1234

    printf("donner un nombre : ") ;
    scanf("%d" , &module);

        
    for(int i = 1 ; i < 10000 ; i *= 10){

        result += (module / (1000 / i)) * i  ; 
        module %= (1000/i) ;
    }

    printf("%d" , result) ;

    return 0 ;

}