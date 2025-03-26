#include <stdio.h>

// Desafio Super Trunfo - Países          
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       
    int   codigo , carta = 01 ;
    float pib ,area , populacao, turistico ;
    char estado [100] , cidade [100]  ;
    float densidade , percapita ;

    int  codigo1 , carta1 = 02 ;
    float pib1 , area1 , populacao1, turistico1 ;
    char estado1 [100] , cidade1 [100]  ;
    float densidade1 , percapita1 ;

    float superpoder , superpoder1 ;

     printf("**** JOGO SUPER TRUNFO ****  \n ");

     printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");


    printf("  Carta 1 : \n  ") ;

    printf("Digite o seu estado : \n");
    scanf("%s", &estado);

    printf("Digite a sua cidade : \n" );
    scanf("%s", &cidade);

    printf("Digite a população : \n" );
    scanf ("%f" ,&populacao );

    printf("Digite a Area : \n" );
    scanf ("%f" ,&area );

    printf("Digite o PIB : \n" );
    scanf("%f", &pib );

    printf("Digite os pontos turísticos : \n" );
    scanf("%f", &turistico );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    printf(" Carta 2 : \n");
    
    printf("Digite o seu estado : \n");
    scanf("%s", &estado1);

    printf("Digite a sua cidade : \n" );
    scanf("%s", &cidade1);

    printf("Digite a Populaçao : \n" );
    scanf ("%f" , &populacao1 );

    printf("Digite a area : \n" );
    scanf ("%f" ,&area1 );

    printf("Digite o PIB : \n" );
    scanf("%f", &pib1 );

    printf("Digite os pontos turísticos : \n" );
    scanf("%f", &turistico1 );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    densidade = (float ) (populacao / area ) ;
    percapita = (float) ( pib / populacao) ;

    printf ("Carta  1 : \n " , carta );
    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");
    printf ("Estado : %s \n " , estado );
    printf ("Codigo :  \n " , carta + estado );
    printf ("Nome da cidade : %s \n " , cidade );
    printf ("População : %.3f  \n " , populacao );
    printf ("Área   : %.3f Km \n " , area );
    printf ("PIB    : %.3f \n " , pib );
    printf ("Números de Pontos Túristicos : %.0f \n " , turistico );
    printf ("Dencidade Populacional : %.3f \n " , densidade );
    printf ("Pib por capita  : $ %.3f \n " , percapita );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    densidade1 = (float ) (populacao1 / area1 ) ;
    percapita1 = (float) ( pib1 / populacao1) ;
   
    printf (" Carta  2 : \n " , carta1);
    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");
    printf ("Estado : %s \n " , estado );
    printf ("Codigo : %d \n " , carta1 + estado1 );
    printf ("Nome da cidade : %s \n " , cidade1 );
    printf ("População : %.3f \n " , populacao1 );
    printf ("Área   : %.3f Km\n " , area1 );
    printf ("PIB    : %.3f \n " , pib1 );
    printf ("Números de Pontos Túristicos : %.0f \n " , turistico1 );
    printf ("Dencidade Populacional : %.3f Km \n " , densidade1 );
    printf ("Pib por capita  : $ %.3f \n " , percapita1 );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    superpoder = (int) populacao + area + turistico + pib , ( densidade /densidade );

    printf("Super poder carta 1 : %d \n " , superpoder );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    superpoder1 = (int) populacao1 + area1 + turistico1 + pib1 , (  densidade1 /densidade1 );

    printf("Super poder carta 2 : %d \n " , superpoder1 );
   
    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    printf (" Comparação de cartas : \n " ) ;

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");


    printf (" carta 1 - %s : %.3f \n " , estado , populacao);
    printf (" carta 2 - %s : %.3f \n " , estado1 , populacao1);

     if (populacao > populacao1){
        printf ("carta 1 - (%s) venceu " , estado  ) ;
    } else {
        printf ("Carta 2 - (%s) venceu " , estado1 );
    }

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

   

return 0;

}