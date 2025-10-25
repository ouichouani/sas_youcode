
//AFICHAGE DES DONNE PERSONNELE

#include <stdio.h> 
int main(){

    char nom[255] , prenom[255] , sexe ;
    int age ;

    printf("\nput votre nom : ") ;
    scanf("%s" , &nom) ;

    printf("\nput votre prenom : ") ;
    scanf("%s" , &prenom) ;

    getchar() ;

    printf("\nput votre sexe : ") ;
    scanf("%c" , &sexe) ;

    printf("\nput votre age : ") ;
    scanf("%d" , &age) ;

    printf("votre nom : %s\nvotre prenom : %s\nvotre sexe: %c\nvotre age : %d" , nom, prenom , sexe , age ) ;
    return 0 ;

}