

#include <stdio.h>

int main(){

    int nombre ,nombre_chifre = 0 , i = 1 ;

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);

        
    while(1){
        
        if (nombre / i ){
            nombre_chifre ++ ;
            i *= 10 ; 
        }else{
            break ;
        }
    }

    printf("le nombre des chifres est %d" , nombre_chifre) ;

    return 0 ;

}