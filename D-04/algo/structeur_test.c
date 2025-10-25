

#include <string.h>
#include <stdio.h>



//DECLARATION DE STRUCTEUR



struct compuce {
    char name [255];
    char adress[255] ;
    int nomber_student ;
};


struct student{

    char name[255] ;
    int age;
    struct compuce compuce ;

};



int main(){


    struct student me ; 

    printf("donne le nom d\'eleve : ");
    scanf("%s", &me.name);

    printf("donne le l\'age d\'eleve : ");
    scanf("%d", &me.age );
    
    printf("donne le nom de compuce: ");
    scanf("%s", &me.compuce.name );
    
    printf("donne l\'adress de compuce : ");
    scanf("%s", &me.compuce.adress );
    
    printf("donne le nembre d\'eleve dans le compuce : ");
    scanf("%d", &me.compuce.nomber_student );

    printf("votre donner sonne ----------------------------------- \n");
    printf("nom : %s \n", me.name);
    printf("age d\'eleve : %d \n", me.age);
    printf("nom de compuce : %s \n", me.compuce.name);
    printf("adress de compuce : %s \n", me.compuce.adress);
    printf("nembre d\'eleve dens le compuce : %d \n", me.compuce.nomber_student);
    printf("votre donner sonne ----------------------------------- \n");

    return 0 ;
}