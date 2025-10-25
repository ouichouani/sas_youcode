
//Challenge 3 : Fonction de Maximum

#include <stdio.h>


int max( int a , int b){
    if (a > b){
        return a ;
    }else if(a < b){
        return b ;
    }
}


int main(){
    printf("le numbre le plus grand entre 5 et 100 est : %d", max( 5 , 100)) ;
    return 0;
}