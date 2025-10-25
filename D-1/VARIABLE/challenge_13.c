
#include <stdio.h>
#include <string.h>

int main(){

    int input = 0, i = 1 , j = 0, result = 0;
    char hex[255] = "";
    char hex_char[] = "0123456789ABCDEF" ;
    char hex_result[255] = "";

    printf("donner un nombre : ") ;
    scanf("%d" , &input);
    int input_clone = input ;
    
    while(input > 0){

        //for binary
        result += (input % 2) * i;
        input /= 2;
        i *= 10;
    }

    while(input_clone > 0){
        hex[j] = hex_char[input_clone % 16] ;
        j++ ;
        input_clone /= 16 ;
    }

    for(int i = 0 ; i < strlen(hex) ; i ++ ){
        hex_result[i] = hex[strlen(hex) - 1 - i];
    }


    printf("%d \n", result);
    printf("%s", hex_result);

    getchar() ;

    return 0 ;
}