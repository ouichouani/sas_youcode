#include <stdio.h>

int main(){

    int nombre_1 ;
    int nombre_2 ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre_1);

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre_2);

    if(nombre_1 == nombre_2){
        printf("le triple de ces deux nobre est : %d " , (nombre_1 + nombre_2) * 3) ;
    }else{
        printf("ces deux nombre ne sont pas identic") ;
    }


    
    return 0 ;

}