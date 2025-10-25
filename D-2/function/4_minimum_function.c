
//Challenge 4 : Fonction de Minimum

#include <stdio.h>


int min( int a , int b){
    if (a < b){
        return a ;
    }else if(a > b){
        return b ;
    }
}


int main(){
    printf("le numbre le plus grand entre 5 et 100 est : %d", min( 5 , 100)) ;
    return 0;
}