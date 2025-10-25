#include <stdio.h>

int main(){
    char c  ;
    printf("donne un charactere : ") ;
    scanf("%c" , &c);

    if(c >= 'A' && c <= 'Z'){
        printf("ce charactere est majescule") ;
    }
    else if (c >= 'a' && c <= 'z'){
        printf("ce charactere est miniscule") ;
    }
    else{
        printf("ce n\'est pas un chaeactere") ;
    }


    return 0 ;

}