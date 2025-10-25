

// VITESS DO M/S A KM/H

#include <stdio.h> 
int main(){

    
    float k_par_heure ;

    printf("vitess en km/h : ") ;
    scanf("%f" , &k_par_heure) ;

    printf("\nvitess en m/s : %.2f m/s" , k_par_heure * 0.27778 ) ;
    
    return 0 ;

}