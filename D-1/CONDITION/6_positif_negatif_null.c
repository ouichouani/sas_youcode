#include <stdio.h>

int main(){

    int nombre ;
    printf("donner un nombre : ") ;
    scanf("%d" , &nombre);

    if(nombre < 0){
        printf("le nombre est negatif ");
    }else if(nombre > 0){
        printf("le nombre est positif ");
    }else{
        printf("le nombre est null ");
    }
    return 0 ;

}