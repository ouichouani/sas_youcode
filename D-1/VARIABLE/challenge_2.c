
//TEMPIRATUSE DO C A K

#include <stdio.h> 
int main(){

    
    int degree_en_c  ;

    printf("temperature en celsiuse : ") ;
    scanf("%d" , &degree_en_c) ;

    printf("\ntemperature en kelvin : %.2f k " , degree_en_c + 273.15 ) ;
    
    return 0 ;

}