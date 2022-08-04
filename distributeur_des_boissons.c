#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
     int choix,sucre,lait;
     float prix;
     char textboisson[50];
     char textsucre[50];
     char textlait[50];


    do{
       printf("Bienvenu\n");
       printf("*****************************\n");
       printf("pour choisir cafe saisir 1\n");
       printf("pour choisir the saisir 2\n");
       printf("pour choisir chocolat saisir 3\n");
       printf("pour choisir soda saisir 4\n");
       printf("*****************************\n");
       scanf("%d",&choix);
       }while( choix<1 || choix>4);

    switch(choix)
  {
    case 1 : prix = 2;
             strcpy(textboisson,"cafe");
             printf("saisir la quantite de sucre\n");
             printf("0 non sucree,1 sucree, 2 tres sucree\n");
             scanf("%d",&sucre);
             if (sucre == 1) {
                 prix = prix + 0.25;
             strcpy(textsucre, " sucree");
             }
             else if (sucre == 2){
                 prix = prix + 0.5;
             strcpy(textsucre, "tres sucree");
             }
             else if (sucre == 0){
                    prix = prix + 0;
             strcpy(textsucre, "sans sucre");
             }
             printf("Ajouter le boisson supplementaire\n");
             printf("1 avec lait, 2 sans lait\n");
             scanf("%d",&lait);
             if (lait == 1){
                    prix = prix + 1;
             strcpy(textlait, "avec lait");
             }
             else if (lait == 0){
                    prix = prix+ 0;
             strcpy(textlait, "sans lait");
             }
             printf("vous devez payer %f DH",prix);
             printf("\nvotre %s est %s %s est pret",textboisson,textsucre,textlait );
    break;

    case 2 : prix = 2;
             strcpy(textboisson,"the");
             printf("saisir la quantite de sucre\n");
             printf("0 non sucree,1 sucree, 2 tres sucree\n");
             scanf("%d",&sucre);
             if (sucre == 1) {
                 prix = prix + 0.25;
             strcpy(textsucre, " sucree");
             }
             else if (sucre == 2){
                 prix = prix + 0.5;
             strcpy(textsucre, "tres sucree");
             }
             else if (sucre == 0){
                    prix = prix + 0;
             strcpy(textsucre, "sans sucre");
             }
              printf("vous devez payer %f DH",prix);
              printf("\nvotre %s est %s est pret",textboisson,textsucre);
    break;

    case 3: prix = 2,5;
             strcpy(textboisson,"chocolat");
             printf("saisir la quantite de sucre\n");
             printf("0 non sucree,1 sucree, 2 tres sucree\n");
             scanf("%d",&sucre);
             if (sucre == 1) {
                 prix = prix + 0.25;
             strcpy(textsucre, " sucree");
             }
             else if (sucre == 2){
                 prix = prix + 0.5;
             strcpy(textsucre, "tres sucree");
             }
             else if (sucre == 0){
                    prix = prix + 0;
             strcpy(textsucre, "sans sucre");
             }
             printf("Ajouter le boisson supplementaire\n");
             printf("1 avec lait, 2 sans lait\n");
             scanf("%d",&lait);
             if (lait == 1){
                    prix = prix + 1;
             strcpy(textlait, "avec lait");
             }
             else if (lait == 0){
                    prix = prix+ 0;
             strcpy(textlait, "sans lait");
             }
             printf("vous devez payer %f DH",prix);
             printf("\nvotre %s est %s %s est pret",textboisson,textsucre,textlait );

    break;

    case 4 : prix = 3;
             strcpy(textboisson,"soda");
             printf("\n votre %s est pret",textboisson);
    break;

    default : printf("erreur");
  }
  return 0;
}

