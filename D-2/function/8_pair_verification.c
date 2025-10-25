
#include <stdio.h>
#include <string.h>

int est_paire( int n ){
    if( n % 2) return 0 ;
    return 1 ;
}

int main(){

    int nombre ;
    printf("donne un nombre : ") ;
    scanf("%d" , &nombre) ;

    if(est_paire(nombre)){
        printf("le nombre %d est paire " , nombre) ;
    }else{
        printf("le nombre %d est impaire " , nombre) ;
    }
    return 0 ;
}