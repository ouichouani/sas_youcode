#include <stdio.h>

int main(){

    int nombre ; //1234

    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);

    if(nombre % 2){
        printf("%d est un nombre impair" ,nombre) ;
    }else{
        printf("%d est un nombre pair" ,nombre) ;
    }


    
    return 0 ;

}