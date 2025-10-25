

#include <stdio.h>

int main(){

    int n; 
    int result = 0 ;

    printf("donner un terme : ") ;
    scanf("%d" , &n);

        
    for(int i = 0 ; i < n ; i++){

        result += i + 1;
    }

    printf("%d" , result) ;

    return 0 ;

}