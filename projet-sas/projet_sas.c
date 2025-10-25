#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int id = 1;
int counter_joueur = 0;

struct joueur
{
    int id;
    char nom[50];
    char prenom[50];
    int numeroMaillot;
    char poste[50];
    int age;
    int buts;
    char dateInscription[1000];
    char statut[50];
};

void menu()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|1.ajouter un joueur                                            |\n");
    printf("|2.afficher tous les joueurs                                    |\n");
    printf("|3.Modifier un joueur                                           |\n");
    printf("|4.supprimer un joueur                                          |\n");
    printf("|5.recherch par un joueur                                       |\n");
    printf("|6.Statistiques                                                 |\n");
    printf("|0.arreter le programme                                         |\n");
    printf("+---------------------------------------------------------------+\n\n");
};

// AJOUTER UN JOUEUR
int validation_numeroMaillot(struct joueur joueur_list[], int numeroMaillot)
{
    for (int index = 0; index < counter_joueur; index++)
    {
        if (joueur_list[index].numeroMaillot == numeroMaillot)
        {
            return 1;
        }
    }
    return 0;
}

void ajouter_joueurs(struct joueur joueur_list[])
{

    int nembre_des_joueur_a_ajouter;
    int choix, valid = 0;
    while (1)
    {

        do
        {
            system("cls");
            printf("+---------------------------------------------------------------+\n");
            printf("|1.ajouter des joueurs                                          |\n");
            printf("+---------------------------------------------------------------+\n\n");

            printf("Combien de joueur vous voulez ajouter ? \n\n");
            printf("\t1.un seul joueurs\n");
            printf("\t2.plusieur joueurs\n");
            printf("\t0.return au menu prinsipal\n\n");
            printf("votre choix : ");

            scanf("%d", &choix);
            getchar();

            switch (choix)
            {
            case 1:
                nembre_des_joueur_a_ajouter = 1;
                valid = 1;
                break;
            case 2:
                system("cls");
                printf("donnez le nembre des joueurs que vous voulez ajouter : ");
                scanf("%d", &nembre_des_joueur_a_ajouter);
                getchar();
                valid = 1;
                break;
            case 0:
                return;

            default:
                printf("choisir un nembre entre 1 et 4 svp !");
                getchar();
                getchar();
                break;
            }
            system("cls");

        } while (!valid);

        for (int i = 0; i < nembre_des_joueur_a_ajouter; i++)
        {

            printf("+---------------------------------------------------------------+\n");
            printf("| Ajouter le  joueur numero %d                                   |\n", i + 1);
            printf("+---------------------------------------------------------------+\n\n");

            // char dateInscription[255];

            joueur_list[counter_joueur].id = id;
            id++;

            printf("donnez le nom de joueur : ");
            fgets(joueur_list[counter_joueur].nom, sizeof(joueur_list[counter_joueur].nom), stdin);
            joueur_list[counter_joueur].nom[strlen(joueur_list[counter_joueur].nom) - 1] = '\0';

            printf("donnez le prenom de joueur : ");
            fgets(joueur_list[counter_joueur].prenom, sizeof(joueur_list[counter_joueur].prenom), stdin);
            joueur_list[counter_joueur].prenom[strlen(joueur_list[counter_joueur].prenom) - 1] = '\0';

            // VERIFICATION DE NUMERO MAILLOT
            int numeroMaillot;
            while (1)
            {
                printf("donnez le numero Maillot de joueur : ");
                scanf("%d", &numeroMaillot);

                if (validation_numeroMaillot(joueur_list, numeroMaillot))
                {
                    printf(" --ce numeroMaillot est deja exists!\n");
                }else{
                    joueur_list[counter_joueur].numeroMaillot = numeroMaillot ;
                    break;
                }
            }

            // VERIFICATION D'AGE
            int age = 0;
            while (1)
            {
                printf("donnez l\'age de joueur : ");
                scanf("%d", &age);
                if (age < 10 || age > 50)
                {
                    printf("l\'age doit etre entre 10 et 50 !\n");
                }
                else
                {
                    joueur_list[counter_joueur].age = age;
                    break;
                }
            }

            printf("donnez le nombre de buts marques par le joueur : ");
            scanf("%d", &joueur_list[counter_joueur].buts);
            getchar();

            // insertion de post joueur ---
            valid = 0;

            do
            {
                system("cls");
                printf("qu\'elle est le poste de joueur ? \n\n");
                printf("\t1.gardien\n");
                printf("\t2.defenseur\n");
                printf("\t3.milieu\n");
                printf("\t4.attaquant\n");
                scanf("%d", &choix);
                getchar();

                switch (choix)
                {
                case 1:
                    strcpy(joueur_list[counter_joueur].poste, "gardien");
                    valid = 1;
                    break;
                case 2:
                    strcpy(joueur_list[counter_joueur].poste, "defenseur");
                    valid = 1;
                    break;
                case 3:
                    strcpy(joueur_list[counter_joueur].poste, "milieu");
                    valid = 1;
                    break;
                case 4:
                    strcpy(joueur_list[counter_joueur].poste, "attaquant");
                    valid = 1;
                    break;
                default:
                    printf("choisir un nembre entre 1 et 4 svp !");
                    getchar();
                    break;
                }
                system("cls");

            } while (!valid);

            // insertion de statut joueur ---
            valid = 0;
            do
            {
                system("cls");
                printf("est ce que le joueur est <titulaire> ou <remplacant> ? \n\n");
                printf("\t1.titulaire\n");
                printf("\t2.remplacant\n");
                scanf("%d", &choix);
                getchar();

                switch (choix)
                {
                case 1:
                    strcpy(joueur_list[counter_joueur].statut, "titulaire");
                    valid = 1;
                    break;
                case 2:
                    strcpy(joueur_list[counter_joueur].statut, "remplacant");
                    valid = 1;
                    break;
                default:
                    printf("choisir seulement 1 ou 2 svp !");
                    getchar();
                    break;
                }
                system("cls");

            } while (!valid);

            // incrimentation de nembre total des joueur
            counter_joueur++;
            id++;

            printf("+---------------------------------------------------------------+\n");
            printf("|le joueur a ete ajouter avec success                           |\n");
            printf("+---------------------------------------------------------------+\n\n");

            getchar();
            system("cls");
        }
    }
}

// AFFICHAGE D'UN JOUEUR
void afficher_joueur(struct joueur joueur)
{
    printf("|id              : %d\n", joueur.id);
    printf("|nom             : %s\n", joueur.nom);
    printf("|prenom          : %s\n", joueur.prenom);
    printf("|numeroMaillot   : %d\n", joueur.numeroMaillot);
    printf("|poste           : %s\n", joueur.poste);
    printf("|age             : %d\n", joueur.age);
    printf("|buts            : %d\n", joueur.buts);
    printf("|statut          : %s\n", joueur.statut);
    printf("+---------------------------------------------------------------+\n");
    return;
}

// RECHERCH PAR UN JOUEUR
int recherch_par_un_joueur_avec_ID(struct joueur joueur_list[])
{

    int id;
    printf("donne l\'id de joueur : ");
    scanf("%d", &id);
    getchar();
    system("cls");
    printf("+---------------------------------------------------------------+\n");

    for (int index = 0; index < counter_joueur; index++)
    {
        if (joueur_list[index].id == id)
        {
            return index;
        }
    }

    return -1;
}
int recherch_par_un_joueur_avec_nom(struct joueur joueur_list[])
{

    printf("+---------------------------------------------------------------+\n");
    printf("|rechercher par nom                                             |\n");
    printf("+---------------------------------------------------------------+\n\n");

    char nom[255];
    printf("donner le nom de joueur : ");
    fgets(nom, 255, stdin);
    nom[strlen(nom) - 1] = '\0';

    system("cls");
    printf("+---------------------------------------------------------------+\n");

    for (int index = 0; index < counter_joueur; index++)
    {
        if (!strcmp(joueur_list[index].nom, nom))
        {
            return index;
        }
    }
    return -1;
}

void recherch_par_un_joueur(struct joueur joueur_list[])
{
    int index, choix, valid = 0;
    while (1)
    {
        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|4.rechercher par un joueur                                     |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("+---------------------------------------------------------------+\n");
        printf("|1.recherch avec l\'id                                           |\n");
        printf("|2.recherch avec le nom                                         |\n");
        printf("|0.return au menu prinsipal                                     |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("votre choix : ");
        scanf("%d", &choix);
        getchar();

        system("cls");
        switch (choix)
        {
        case 0:
            return;
        case 1:
            index = recherch_par_un_joueur_avec_ID(joueur_list);
            if (index >= 0)
            {
                afficher_joueur(joueur_list[index]);
                getchar();
                valid = 1;
            }
            else
            {
                system("cls");
                printf("+---------------------------------------------------------------+\n");
                printf("|le joueur n'est pas trouver                                    |\n");
                printf("+---------------------------------------------------------------+\n\n");
                getchar();
            }
            valid = 1;
            break;
        case 2:
            index = recherch_par_un_joueur_avec_nom(joueur_list);
            if (index >= 0)
            {
                afficher_joueur(joueur_list[index]);
                getchar();
                valid = 1;
            }
            else
            {
                system("cls");
                printf("+---------------------------------------------------------------+\n");
                printf("|le joueur n'est pas trouver                                    |\n");
                printf("+---------------------------------------------------------------+\n\n");
                getchar();
            }
            break;
        default:
            printf("choisir un nembre entre 0 et 2 svp !");
            getchar();
            break;
        }
    }
}

// AFFICHAGE
void tri_joueur_par_post(struct joueur joueur_list[])
{
    char poste[][200] = {"gardien", "defenseur", "milieu", "attaquant"};
    int counteur_joueur_post = 0;
    for (int i = 0; i < 4; i++)
    {
        counteur_joueur_post = 0;
        printf("\nliste des %ss -----------------------------------------------+\n", poste[i]);

        for (int index = 0; index < counter_joueur; index++)
        {
            if (!strcmp(joueur_list[index].poste, poste[i]))
            {
                afficher_joueur(joueur_list[index]);
                counteur_joueur_post++;
            }
        }
        if (!counteur_joueur_post)
        {
            printf("|pas de joueur avec le poste %s\n", poste[i]);
        }
    }

    return;
}
void afficher_list_joueurs(struct joueur joueur_list[])
{

    if (counter_joueur <= 0)
    {
        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|il ny a aucun joueur parmis votre equip                        |\n");
        printf("+---------------------------------------------------------------+\n\n");

        getchar();
        return;
    }

    int choix, valid = 0;

    while (1)
    {
        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|4.afficher des joueurs                                         |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("+---------------------------------------------------------------+\n");
        printf("|1.afficher les joueurs selon le nom                            |\n");
        printf("|2.afficher les joueurs selon l\'age                             |\n");
        printf("|3.afficher les joueurs selon le poste                          |\n");
        printf("|4.afficher les joueurs selon l\'id                              |\n");
        printf("|0.return au menue                                              |\n");
        printf("+---------------------------------------------------------------+\n\n");
        printf("votre choix : ");

        scanf("%d", &choix);
        getchar();
        system("cls");

        switch (choix)
        {
        case 1:
            // sorting by name
            for (int tour = 0; tour < counter_joueur; tour++)
            {
                for (int index = 0; index < counter_joueur - 1; index++)
                {
                    if (strcmp(joueur_list[index].nom, joueur_list[index + 1].nom) > 0)
                    {
                        struct joueur temp;
                        temp = joueur_list[index];
                        joueur_list[index] = joueur_list[index + 1];
                        joueur_list[index + 1] = temp;
                    }
                }
            }

            // show players after sortion ...
            printf("+---------------------------------------------------------------+\n");
            for (int index = 0; index < counter_joueur; index++)
            {
                afficher_joueur(joueur_list[index]);
            }

            getchar();
            valid = 1;
            break;
        case 2:
            // sorting by age
            for (int tour = 0; tour < counter_joueur; tour++)
            {
                for (int index = 0; index < counter_joueur - 1; index++)
                {
                    if (joueur_list[index].age > joueur_list[index + 1].age)
                    {
                        struct joueur temp;
                        temp = joueur_list[index];
                        joueur_list[index] = joueur_list[index + 1];
                        joueur_list[index + 1] = temp;
                    }
                }
            }

            // show players after sortion ...
            printf("+---------------------------------------------------------------+\n");
            for (int index = 0; index < counter_joueur; index++)
            {
                afficher_joueur(joueur_list[index]);
            }

            getchar();
            valid = 1;
            break;
        case 3:

            system("cls");
            tri_joueur_par_post(joueur_list);
            getchar();
            valid = 1;
            break;

        case 0:
            return;
        case 4:
            struct joueur temp;
            for (int tour = 0; tour < counter_joueur; tour++)
            {
                for (int index = 0; index < counter_joueur - 1; index++)
                {

                    if (joueur_list[index].id > joueur_list[index + 1].id)
                    {
                        temp = joueur_list[index];
                        joueur_list[index] = joueur_list[index + 1];
                        joueur_list[index + 1] = temp;
                    }
                }
            }

            // show players after sortion ...
            printf("+---------------------------------------------------------------+\n");
            for (int index = 0; index < counter_joueur; index++)
            {
                afficher_joueur(joueur_list[index]);
            }
            getchar();
            valid = 1;
            break;

        default:

            printf("choisir un nembre entre 0 et 3 svp !");
            getchar();
            break;
        }
        system("cls");
    }
}

// modification
void modification_post_joueur(struct joueur joueur_list[], int index)
{
    int choix, valid = 0;
    do
    {
        system("cls");
        printf("qu\'elle est le nevua poste de joueur ? \n\n");
        printf("\t1.gardien\n");
        printf("\t2.defenseur\n");
        printf("\t3.milieu\n");
        printf("\t4.attaquant\n\n");

        printf("votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
            strcpy(joueur_list[index].poste, "gardien");
            valid = 1;
            break;
        case 2:
            strcpy(joueur_list[index].poste, "defenseur");
            valid = 1;
            break;
        case 3:
            strcpy(joueur_list[index].poste, "milieu");
            valid = 1;
            break;
        case 4:
            strcpy(joueur_list[index].poste, "attaquant");
            valid = 1;
            break;
        default:
            printf("choisir un nembre entre 1 et 4 svp !");
            getchar();
            break;
        }
        system("cls");
    } while (!valid);
}
void modification_age_joueur(struct joueur joueur_list[], int index)
{
    int age;

    system("cls");
    printf("donner le nevau age de joueur : ");
    scanf("%d", &age);
    getchar();

    joueur_list[index].age = age;
}
void modification_nombre_but_joueur(struct joueur joueur_list[], int index)
{
    int buts;

    system("cls");
    printf("donner le nevau nombre des buts de joueur : ");
    scanf("%d", &buts);
    getchar();

    joueur_list[index].buts = buts;
}

void Modifier_joueur(struct joueur joueur_list[])
{
    int id_modification, choix, valid = 0;

    system("cls");
    printf("+---------------------------------------------------------------+\n");
    printf("|3.modifier un joueur                                           |\n");
    printf("+---------------------------------------------------------------+\n\n");

    int index = recherch_par_un_joueur_avec_ID(joueur_list);

    if (index >= 0)
    {
        do
        {
            afficher_joueur(joueur_list[index]);

            printf("qu\'est ce que vous voulez modifire ? \n\n");
            printf("\t1.post\n");
            printf("\t2.age\n");
            printf("\t3.nombre buts\n");
            printf("\t4.tous\n");
            printf("\t0.annuler et return au menu\n\n");
            printf("votre choix : ");
            scanf("%d", &choix);
            getchar();

            switch (choix)
            {

            case 0:
                // quiter la function
                return;

            case 1:
                // modification de post
                modification_post_joueur(joueur_list, index);
                valid = 1;
                break;

            case 2:
                // modification d'age
                modification_age_joueur(joueur_list, index);
                valid = 1;
                break;

            case 3:
                // modification de nombre buts
                modification_nombre_but_joueur(joueur_list, index);
                valid = 1;
                break;

            case 4:
                // modification de tous
                modification_post_joueur(joueur_list, index);
                modification_age_joueur(joueur_list, index);
                modification_nombre_but_joueur(joueur_list, index);
                valid = 1;
                break;

            default:
                system("cls");
                printf("choisir un nembre entre 0 et 4 svp !");
                getchar();
                system("cls");
                break;
            }

        } while (!valid);

        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|le joueur a bien modifier                                      |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("+---------------------------------------------------------------+\n");
        afficher_joueur(joueur_list[index]);
        getchar();
    }
    else
    {

        printf("+---------------------------------------------------------------+\n");
        printf("|le joueur n'est pas trouver                                    |\n");
        printf("+---------------------------------------------------------------+\n\n");
        getchar();
    }
}

// SUPPRIMER JOUEUR
void supprimer_joueur(struct joueur joueur_list[])
{
    system("cls");
    printf("+---------------------------------------------------------------+\n");
    printf("|4.supprimer d'un joueur                                        |\n");
    printf("+---------------------------------------------------------------+\n\n");

    int index = recherch_par_un_joueur_avec_ID(joueur_list);
    if (index >= 0)
    {
        int choix, valid;
        struct joueur temp;
        do
        {

            afficher_joueur(joueur_list[index]);
            printf("\navez vous d'accord avec la suppression ? \n\n");
            printf(" 1.oui \n");
            printf(" 0.annuler at return au menu prinsipal \n\n");
            printf("votre choix : ");
            scanf("%d", &choix);

            switch (choix)
            {
            case 0:
                // quitter la function
                return;

            case 1:
                for (int i = index; i < counter_joueur; i++)
                {
                    joueur_list[i] = joueur_list[i + 1];
                }
                counter_joueur--;
                valid = 1;
                getchar();
                break;

            default:
                system("cls");
                printf("choisir 0 ou 1 svp !");
                getchar();
                system("cls");
                break;
            }
        } while (!valid);

        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|le joueur a ete supprimer avex succsess                        |\n");
        printf("+---------------------------------------------------------------+\n\n");

        getchar();
    }
    else
    {

        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|le joueur n'est pas trouver                                    |\n");
        printf("+---------------------------------------------------------------+\n\n");
        getchar();
    }
}

// STATISTIQUE
int age_moyen_joueurs(struct joueur joueur_list[])
{
    int age_moyen = 0;
    for (int index = 0; index < counter_joueur; index++)
    {
        age_moyen += joueur_list[index].age;
    }
    return age_moyen / counter_joueur;
}
void joueurs_marque_plus_X_buts(struct joueur joueur_list[])
{
    int min_buts;
    int pas_de_joueur_marquer_plus_de_min_buts = 1;
    printf("\ndonne le min du buts le joueur a marque : ");
    scanf("%d", &min_buts);
    getchar();
    printf("\nles joueurs ayant marque plus de %d buts sonne : \n\n", min_buts);
    for (int index = 0; index < counter_joueur; index++)
    {
        if (joueur_list[index].buts >= min_buts)
        {
            afficher_joueur(joueur_list[index]);
            pas_de_joueur_marquer_plus_de_min_buts = 0;
        }
    }
    if (pas_de_joueur_marquer_plus_de_min_buts)
    {

        printf(" - 0 joueur .");
    }
}
void afficher_joueur_plus_age(struct joueur joueur_list[])
{
    int index_joueur_plus_age = 0;
    for (int index = 0; index < counter_joueur; index++)
    {
        if (joueur_list[index_joueur_plus_age].age > joueur_list[index_joueur_plus_age].age)
        {
            index_joueur_plus_age = index;
        }
    }
    afficher_joueur(joueur_list[index_joueur_plus_age]);
}
void afficher_joueur_plus_jeune(struct joueur joueur_list[])
{
    int index_joueur_plus_jeune = 0;
    for (int index = 0; index < counter_joueur; index++)
    {
        if (joueur_list[index].age < joueur_list[index_joueur_plus_jeune].age)
        {
            index_joueur_plus_jeune = index;
        }
    }
    afficher_joueur(joueur_list[index_joueur_plus_jeune]);
}

void afficher_statistic(struct joueur joueur_list[])
{
    int choix, valid = 0;

    while (1)
    {

        system("cls");
        printf("+---------------------------------------------------------------+\n");
        printf("|6.statistic des joueurs                                        |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("1. Afficher le nombre total de joueurs dans l\'equipe.\n");
        printf("2. Afficher l\'age moyen des joueurs.\n");
        printf("3. Afficher les joueurs ayant marque plus de X buts .\n");
        printf("4. Afficher le meilleur buteur .\n");
        printf("5. Afficher le joueur le plus jeune et le plus age.\n");
        printf("0. return au menu principale \n\n");

        printf("votre choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix)
        {
        case 0:
            return;

        case 1:
            system("cls");
            printf("\nle nombre total de joueurs dans l\'equipe est: %d joueurs\n", counter_joueur);
            valid = 1;
            getchar();
            break;

        case 2:
            system("cls");

            printf("\nl\'age moyen des joueurs est : %d ", age_moyen_joueurs(joueur_list));
            valid = 1;
            getchar();
            break;
        case 3:
            system("cls");
            joueurs_marque_plus_X_buts(joueur_list);
            valid = 1;
            getchar();
            break;

        case 4:
            system("cls");
            printf("\nle meilleur buteur est : \n\n");
            int meilleur_buteur_index = 0;
            for (int index = 0; index < counter_joueur; index++)
            {
                if (joueur_list[index].buts > joueur_list[meilleur_buteur_index].buts)
                {
                    meilleur_buteur_index = index;
                }
            }

            printf("+---------------------------------------------------------------+\n");
            afficher_joueur(joueur_list[meilleur_buteur_index]);
            valid = 1;
            getchar();
            break;

        case 5:
            system("cls");

            printf("\nle joueur le plus jeune et le plus age sonne : \n\n");
            printf("le plus age : \n\n");
            printf("+---------------------------------------------------------------+\n");
            afficher_joueur_plus_age(joueur_list);

            printf("le plus jeune : \n\n");
            printf("+---------------------------------------------------------------+\n");
            afficher_joueur_plus_jeune(joueur_list);
            getchar();
            break;

        default:
            system("cls");
            printf("choisir un nembre entre 0 et 5 svp !");
            getchar();
            system("cls");
            break;
            break;
        }
    }
}


int main()
{
    struct joueur joueur[255] = {
        {1, "Benzema", "Karim", 9, "attaquant", 36, 250, "2021-08-15", "titulaire"},
        {2, "Mbappe", "Kylian", 7, "attaquant", 26, 180, "2017-07-01", "titulaire"},
        {3, "Griezmann", "Antoine", 8, "milieu", 34, 150, "2014-06-12", "titulaire"},
        {4, "Kante", "N'Golo", 13, "milieu", 34, 25, "2016-08-10", "titulaire"},
        {5, "Varane", "Raphael", 4, "defenseur", 32, 20, "2013-09-05", "titulaire"},
        {6, "Lloris", "Hugo", 1, "gardien", 38, 0, "2010-03-25", "remplacant"},
        {7, "Pogba", "Paul", 6, "milieu", 32, 50, "2013-08-20", "remplacant"},
        {8, "Giroud", "Olivier", 18, "attaquant", 38, 230, "2011-06-10", "titulaire"},
        {9, "Dembele", "Ousmane", 11, "gardien", 28, 70, "2016-09-01", "titulaire"},
        {10, "Theo", "Hernandez", 22, "defenseur", 27, 15, "2019-07-06", "titulaire"}};
    counter_joueur += 10;
    id += 10;

    int choix, exit = 0;

    while (!exit)
    {
        system("cls");

        menu();

        printf("votre choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix)
        {
        case 1:
            ajouter_joueurs(joueur);
            break;

        case 2:
            afficher_list_joueurs(joueur);
            break;

        case 3:
            Modifier_joueur(joueur);
            break;

        case 4:
            supprimer_joueur(joueur);
            break;

        case 5:
            recherch_par_un_joueur(joueur);
            break;

        case 6:
            afficher_statistic(joueur);
            break;

        case 0:
            return 0;

        default:
            system("cls");
            printf("choisir un nembre entre 0 et 6 svp !");
            getchar();
            system("cls");
            break;
        }
        system("cls");
    }
}