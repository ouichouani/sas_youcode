
#include <stdio.h> 
int main(){

    
    float a , b  ;

    printf("give the first number : ") ;
    scanf("%f" , &a) ;
    
    printf("give the second number : ") ;
    scanf("%f" , &b) ;

    printf("%.2f + %.2f  = %.2f\n" , a , b , a + b) ;
    printf("%.2f - %.2f  = %.2f\n" , a , b , a - b) ;
    printf("%.2f * %.2f  = %.2f\n" , a , b , a * b) ;
    printf("%.2f / %.2f  = %.2f\n" , a , b , a / b) ;

    return 0 ;

}