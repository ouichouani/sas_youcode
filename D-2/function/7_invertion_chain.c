
#include <stdio.h>
#include <string.h>

void str_reverce( char string[] ){
    
    char reverced_str[255] = "";

    for(int i = 0 ; i < strlen(string) ; i++){
        reverced_str[i] = string[strlen(string) - 1 - i] ;
    }

    printf("%s", reverced_str) ;
}

int main(){

    char str[255] ;
    printf("donne une chaine des characteres : ") ;
    scanf("%s" , &str);
    str_reverce(str) ;
    return 0 ;
}