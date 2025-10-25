

//INVERS DE 4 NOMBRES


#include <stdio.h>

int main(){

    int nombre = 0 ; //1234
    int input ;
    int module ;

    printf("donner un nombre de 4 chifre : ") ;
    scanf("%d" , &input);

    module = input ;
    
    nombre += module / 1000 ; // 1
    module %= 1000 ; //234

    nombre += (module / 100) * 10 ; // 21
    module %= 100 ; // 34

    nombre += (module / 10) *100 ; // 321
    module %= 10 ; //4

    nombre += module * 1000; // 4321

    printf("nbr revercer de %d est : %d" , input ,nombre) ;

    
    return 0 ;

}