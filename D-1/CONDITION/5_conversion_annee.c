#include <stdio.h>

int main(){
    int anne ;
    printf("donner l\'annee que vous voulez convertir : ") ;
    scanf("%d" , &anne);

    printf("\n. anne : %d" , anne ) ; 
    printf("\n. mois : %d" , 12 ) ; 
    int mois = 365 ;
    if(anne % 4){
        printf("\n. joures : %d" , mois ) ; 
    }else {
        int mois = 366 ;
        printf("\n. joures : %d" , mois ) ; 
    }
    printf("\n. heures : %d" , mois * 24) ; 
    printf("\n. minutes : %d" , mois * 24 * 60) ; 
    printf("\n. secondes : %d" , mois * 24 * 60 * 60) ; 
    
    return 0 ;

}