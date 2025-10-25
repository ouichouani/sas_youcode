
//ETAT PHYSIC D'EAU SELON LA TEMPERATURE

#include <stdio.h> 
int main(){

    
    int degree_en_c  ;

    printf("temperature en celsiuse : ") ;
    scanf("%d" , &degree_en_c) ;

    if(degree_en_c <= 0){
        printf("l\'etat d\'eau est solide") ;

    }else if(degree_en_c >= 100 ){
        printf("l\'etat d\'eau est gaz") ;

    }else{
        printf("l\'etat d\'eau est liquide") ;

    }

    return 0 ;

}