#include <stdio.h>
#include <math.h>


int main(){

    int a  , b  , c;

    printf("donner le nombre x^2 : ") ;
    scanf("%d" , &a);

    printf("donner le nombre x : ") ;
    scanf("%d" , &b);

    printf("donner le nombre c : ") ;
    scanf("%d" , &c);

    int delta = pow(a , 3) - 4 * a * c ;
    if(delta > 0){
        int result1 = (-b -sqrt(delta)) / 2 * a ; 
        int result2 = (-b +sqrt(delta)) / 2 * a ; 

        printf("l\'equation accept deux solution : x1 = %d \tx2 = %d" , result1 , result2) ;
        
    }else if(delta = 0){
        int result1 = -b / 2 * a ; 
        printf("l\'equation accept use seul solution : x1 = %d" , result1 ) ;

    }else{
        printf("cette function n'accept aucun resultat") ;
    }

    return 0 ;

}