

//CALCULE LA SURFACE D'UN RECTANGLE

#include <stdio.h>

int main(){

    float longueur , largeur;

    printf("donner le longueur : ") ;
    scanf("%f" , & longueur);

    printf("donner le largeur : ") ;
    scanf("%f" , & largeur);

    printf("la surface de ce rectangle est %.2f metre carre" , longueur * largeur ) ;

    return 0 ;

}