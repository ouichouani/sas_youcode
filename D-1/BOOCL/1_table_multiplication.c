
#include <stdio.h>

int main(){

    int nombre ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);
        
    for(int i = 1 ; i < 11 ; i++){
        printf("%d * %d = %d\n" , nombre , i , nombre * i ) ;
    }

   
    return 0 ;

}