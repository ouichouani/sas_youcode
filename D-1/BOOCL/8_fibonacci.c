

#include <stdio.h>

int main(){

    // int x = 1 , y = 0  , term , counter;

    // printf("donner un term : ") ;
    // scanf("%d" , &term);
    
        
    // for(int i = 0 ; i < term/2 + (term % 2)  ; i ++ ){

    //     x = y + x ;
    //     y = y + x ;

    //     if( i + 1 == term/2 + (term % 2)  && term % 2 ){
    //         printf("%d " , x ) ;
    //     }else{
    //         printf("%d %d " , x , y ) ;
    //     }
    // }

    int f0 = 0;
    int f1 = 1;
    int result = 0;
    int n = 5;

    for(int i = 1; i < n; i++){
        result = f0 + f1;
        f0  = f1;
        f1 = result;
    }
    
    printf("%d ", result);


    return 0 ;

}