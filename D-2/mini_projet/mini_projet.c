#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {

    //DECLARATION DE TABLEAU QUI SE COMPOSE DE 4 TABLEAU SEPARER

    char auteur[255][255] , titre[255][255] ;
    int  prix[255] , quantite[255] , choix  ;
    bool exit = false;
    int books_counter = 0;
    // int c;
    char titre_de_recherch[255] ;




    //MENU
    while(!exit){
    
        printf("+---------------------------------------------------------------+\n") ;
        printf("|1.ajouter un livre                                             |\n") ;
        printf("|2.modifier la quantite d'un livre                              |\n") ;
        printf("|3.supprimer un livre                                           |\n") ;
        printf("|4.afficher le stock                                            |\n") ;
        printf("|5.recherch par un livre                                        |\n") ;
        printf("|6.aficher le nembre totale des livres                          |\n") ;
        printf("|7.arreter le programme                                         |\n") ;
        printf("+---------------------------------------------------------------+\n\n") ;

        printf("ton choix : ") ;
        scanf("%d" , &choix ) ;

        system("cls");
        switch(choix){
            case 1 :
                printf("+---------------------------------------------------------------+\n");
                printf("|1.ajouter un livre                                             |\n");
                printf("+---------------------------------------------------------------+\n\n"); 

                getchar() ;

                printf("siser le titre ici : ") ;
                fgets(titre[books_counter] , sizeof(titre[books_counter]) , stdin) ;
                titre[books_counter][strlen(titre[books_counter]) -1] = '\0' ;
                
                printf("siser le nom d'auteur ici : ") ;
                fgets(auteur[books_counter] , sizeof(auteur[books_counter]) , stdin) ;
                auteur[books_counter][strlen(auteur[books_counter]) -1] = '\0' ;
                
                printf("siser le prix de livre ici : ") ;
                scanf("%d" , &prix[books_counter]);

                printf("siser la quantite ici : ") ;
                scanf("%d" , &quantite[books_counter]);

                books_counter ++ ;

                printf("+---------------------------------------------------------------+\n");
                printf("|livre a ete ajouter avec success                               |\n");
                printf("+---------------------------------------------------------------+\n\n"); 

                break ;

            case 2 :

                printf("+---------------------------------------------------------------+\n");
                printf("|2.modifier la quantite d'un livre                              |\n");
                printf("+---------------------------------------------------------------+\n\n"); 

                

                getchar() ;

                printf("donne le titre de livre qui vous voulez mettre a joure : ") ;
                fgets(titre_de_recherch , sizeof(titre_de_recherch) , stdin) ;
                titre_de_recherch[strlen(titre_de_recherch) - 1] = '\0' ;

                for (int i = 0 ; i < books_counter ; i++){

                    if (!strcmp(titre_de_recherch , titre[i]) ){
                        printf("donne la nouvelle quantite de ce livre : ") ;
                        scanf("%d" , &quantite[i]);

                        printf("+---------------------------------------------------------------+\n");
                        printf("|la quantite de livre a ete mise a jour avec success            |\n");
                        printf("+---------------------------------------------------------------+\n\n"); 

                        break ;
                    }else if(i + 1 == books_counter ){
                        printf("%d" , strcmp(titre_de_recherch , titre[i]));
                        printf("+---------------------------------------------------------------+\n");
                        printf("|le livre n'est pas trouver                                     |\n");
                        printf("+---------------------------------------------------------------+\n\n"); 
                        break ;
                    }
                }

                getchar();

                break ;

            case 3 :
                if(!books_counter) break ;

                printf("+---------------------------------------------------------------+\n");
                printf("|3.supprimer un livre                                           |\n");
                printf("+---------------------------------------------------------------+\n\n"); 
                
                getchar() ; // remove any thing still in buffer

                printf("donne le titre de livre qui vous voulez supprimer : ") ;
                fgets(titre_de_recherch , sizeof(titre_de_recherch) , stdin) ;
                titre_de_recherch[strlen(titre_de_recherch) - 1] = '\0' ;


                for (int i = 0 ; i < books_counter ; i++){
                    if (!strcmp(titre_de_recherch, titre[i]) ){
                        printf("la supprition en coure ... \n") ;
                        for(int j = i ; j < books_counter ; j++  ){
                            
                                strcpy(auteur[j] ,auteur[j+1] ) ;
                                strcpy(titre[j] , titre[j+1]) ;
                                prix[j] = prix[j+1] ;
                                quantite[j] = quantite[j+1] ;
                        }
                        books_counter -- ;
                        printf("+---------------------------------------------------------------+\n");
                        printf("|le livre a ete supprimer avec success                          |\n");
                        printf("+---------------------------------------------------------------+\n\n"); 
                        break ;

                    }else if(i + 1 == books_counter ){
                        printf("+---------------------------------------------------------------+\n");
                        printf("|le livre n'est pas trouver                                     |\n");
                        printf("+---------------------------------------------------------------+\n\n"); 
                        break ;
                    }
                }
                getchar() ;
                break ;
            case 4 :

                if(books_counter <= 0) {
                    printf("+---------------------------------------------------------------+\n");
                    printf("|le stock est vide                                              |\n");
                    printf("+---------------------------------------------------------------+\n\n"); 

                    getchar() ;
                    getchar() ;

                    break ;
                }
                printf("+---------------------------------------------------------------+\n");
                printf("|4.afficher le stock                                            |\n");
                printf("+---------------------------------------------------------------+\n\n"); 
                
                printf("+---------------------------------------------------------------+\n");  

                for( int i = 0 ; i < books_counter ; i++ ){
                    printf("|titre             : %s\n" , titre[i]) ;
                    printf("|auteur            : %s\n" , auteur[i]) ;
                    printf("|quantite restent  : %d\n" , quantite[i]) ;
                    printf("|prix de livre     : %d\n" , prix[i]) ;
                    printf("+---------------------------------------------------------------+\n") ;
                }

                getchar() ;
                getchar() ;
                break ;

            case 5 :
                printf("+---------------------------------------------------------------+\n");
                printf("|5.recherch par un livre                                        |\n") ;
                printf("+---------------------------------------------------------------+\n\n"); 
                
                getchar() ;

                printf("donne le titre de livre qui vous voulez trouver a joure : ") ;
                fgets(titre_de_recherch , sizeof(titre_de_recherch) , stdin) ;
                titre_de_recherch[strlen(titre_de_recherch) - 1] = '\0' ;

                    
                for (int i = 0 ; i < books_counter ; i++){

                    if (!strcmp(titre_de_recherch , titre[i]) ){

                        printf("+---------------------------------------------------------------+\n") ;
                        printf("|titre             : %s\n" , titre[i]) ;
                        printf("|auteur            : %s\n" , auteur[i]) ;
                        printf("|quantite restent  : %d\n" , quantite[i]) ;
                        printf("|prix de livre     : %d\n" , prix[i]) ;
                        printf("+---------------------------------------------------------------+\n\n") ;
                        break ;
                        
                    }else if(i + 1 == books_counter ){

                        printf("+---------------------------------------------------------------+\n") ;
                        printf("|le livre n'est pas trouver                                     |\n");
                        printf("+---------------------------------------------------------------+\n") ;
                        break ;
                    }
                }

                getchar() ;

                break ;
                
            case 6 :
                int totale_book = 0 ;
                for(int i = 0 ; i < books_counter ; i++){
                    totale_book += quantite[i] ;
                    
                }
                printf("+---------------------------------------------------------------+\n") ;
                printf("|le nembre totale de tous les livres restant est : %d\n" , totale_book );
                printf("+---------------------------------------------------------------+\n") ;

                getchar();
                getchar();

                break ;
            
            case 7 :
                exit = 1 ;
                break ;
                    
            default :
                    
                    printf("+---------------------------------------------------------------+\n") ;
                    printf("|choisir un nombrre entre 1 et 6                                |\n" );
                    printf("+---------------------------------------------------------------+\n") ;

                    getchar() ;
                    getchar() ;
                    break;
        }
        system("cls");
    }
}