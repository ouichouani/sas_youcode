// CALCUL MOYENN GEOMETRIQUE

#include <stdio.h>
int main(){

    int a , b , c ;
    
    printf("give the first number : ") ;
    scanf("%d" , & a);
    
    printf("give the second number : ") ;
    scanf("%d" , & b);
    
    printf("give the therd number : ") ;
    scanf("%d" , & c);
    
    float moyenne_geometrique = ( a * b * c) ^ (1/3) ;
    printf("moyenne geometrique est : %.2f " , moyenne_geometrique ) ;

    return 0 ;
}