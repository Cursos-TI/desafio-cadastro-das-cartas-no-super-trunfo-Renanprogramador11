#include <stdio.h>

// Desafio Super Trunfo - Países          
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       
    int   codigo , area ;
    float pib , populacao, turistico ;
    char estado [50] , cidade [50] , carta [50] ;
    float densidade , percapita ;

     printf("**** JOGO SUPER TRUNFO ****  \n ");


    printf("Digite sua carta 1 : \n");
    scanf("%s", &carta);

    printf("Digite o seu estado : \n");
    scanf("%s", &estado);

    printf("Digite a sua cidade : \n" );
    scanf("%s", &cidade);

    printf("Digite a população : \n" );
    scanf ("%f" ,&populacao );

    printf("Digite o PIB : \n" );
    scanf("%f", &pib );

    printf("Digite os pontos turísticos : \n" );
    scanf("%f", &turistico );

    printf("Digite sua carta 2 : \n");
    scanf("%s", &carta);

    printf("Digite o seu estado : \n");
    scanf("%s", &estado);

    printf("Digite a sua cidade : \n" );
    scanf("%s", &cidade);

    printf("Digite a população : \n" );
    scanf ("%f" , &populacao );

    printf("Digite o PIB : \n" );
    scanf("%f", &pib );

    printf("Digite os pontos turísticos : \n" );
    scanf("%f", &turistico );

    densidade = (float ) (populacao / area ) ;
    percapita = (float) ( pib / populacao) ;

    printf ("\ncarta  1 : %s \n estado : %s \n ", carta , estado );
    printf ("codigo : %s \n " , estado );
    printf ("nome da cidade : %s \n " , cidade );
    printf ("População : %.5f  \n " , populacao );
    printf ("Área   : %.5d  \n " , area );
    printf ("PIB    : %.5f \n " , pib );
    printf ("Números de Pontos Túristicos : %f \n " , turistico );
    printf ("Dencidade Populacional : %.4f \n " , densidade );
    printf ("Pib por capita  : %.4f \n " , percapita );

    densidade = (float ) (populacao / area ) ;
    percapita = (float) ( pib / populacao) ;

    printf (" \n carta  2 : %s \n estado : %s \n ", carta , estado );
    printf (" codigo : %s \n " , estado );
    printf (" nome da cidade : %s \n " , cidade );
    printf (" População : %.5f \n " , populacao );
    printf (" Área   : %.5d \n " , area );
    printf (" PIB    : %.5f \n " , pib );
    printf (" Números de Pontos Túristicos : %f " , turistico );
    printf (" Dencidade Populacional : %.4f \n " , densidade );
    printf (" Pib por capita  : %.4f \n " , percapita );

   

return 0;

}
