#include <stdio.h>

int main(){

    int note ;
    printf("donner la note que vous avez recu : ") ;
    scanf("%d" , &note);

    if(note < 10){
        printf("vous avez recale ") ;
    }else if(note >= 10 && note < 12){
        printf("votre mention est : passable ") ;
    }else if(note >= 12 && note < 14){
        printf("votre mention est : assez bien") ;
    }else if(note >= 14 && note < 16){
        printf("votre mention est : bien ") ;
    }else{
        printf("votre mention est : tres bien ") ;
    }
    return 0 ;

}