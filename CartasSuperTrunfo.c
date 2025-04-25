#include <stdio.h>

// Desafio Super Trunfo - Países          
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       
    int   codigo , carta = 01 , escolhaCarta ;                         // declaração de toda as variaveis do codigo 
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


    printf("  Carta 1 : \n  ") ;          // Entrada de dados com printf e leitura de dados com o scanf .

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

    printf ("Carta  1 : \n " , carta );          // Saida de dados para o usuario do jo com o printf . 
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

    densidade1 = (float ) (populacao1 / area1 ) ;     // Calculo da dencidade 
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

    superpoder = (int) populacao + area + turistico + pib , ( densidade /densidade );    // calculo do  super poder usando a conversao direta 

    printf("Super poder carta 1 : %d \n " , superpoder );

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    superpoder1 = (int) populacao1 + area1 + turistico1 + pib1 , (  densidade1 /densidade1 );

    printf("Super poder carta 2 : %d \n " , superpoder1 );
   
    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    printf (" Comparação de cartas : \n " ) ;

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n ");

    printf (" ### Comparação da Carta ###\n ");
    printf("Esclha uma carta \n ");
    printf ("1. População \n") ;
    printf ("2. Area \n") ;
    printf ("3. Pib \n") ;
    printf ("4. Pontos turisticos \n") ;
    printf ("5. Densidade Populacional \n") ;
    printf ("6. Pib percapta \n") ;
    printf ("7. Super Poder \n") ;
    scanf ("%d" ,&escolhaCarta);

    switch (escolhaCarta)
    {
    case 1 :
        printf("Carta Escolhida : Populção ") ;
    break;
    case 2 :
        printf("Carta Escolhida : Area ") ;
    break;
    case 3 :
        printf("Carta Escolhida : Pib ") ;
    break;
    case 4 :
        printf("Carta Escolhida : Pntos Turisticos ") ;
    break;
    case 5 :
        printf("Carta Escolhida : Densidade Populacional ") ;
    break;
    case 6 :
        printf("Carta Escolhida : Pib Percapta ") ;
    break;
    case 7 :
        printf("Carta Escolhida : Super Poder ") ;
    break;

    default:
      printf("Opção Invalida") ;
        break;
    }
    printf (" carta 1 - %s : População : %.3f \n " , estado , populacao);         // comprarçao de todas as cartas diretamente no codigo sem escolha do usuarios
    printf (" carta 2 - %s : População : %.3f \n " , estado1 , populacao1);

     if (populacao > populacao1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else if (populacao < populacao1) {
        printf (" Carta 2 - (%s) venceu \n " , estado1 );
    } else{
        printf (" Houve um empate ");
    }

     printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 
    

     printf (" carta 1 - %s : Area : %.3f \n " , estado , area);
    printf (" carta 2 - %s  : Area : %.3f \n " , estado1 , area1);

    
    if (area > area1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
        } else if (area < area1){
        printf ("Carta 2 - (%s) venceu \n " , estado1 );
    } else
    {
        printf (" Houve um empate\n");
    }
    

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 

    printf (" carta 1 - %s  : Pib : %.3f \n " , estado , pib);
    printf (" carta 2 - %s  : Pib : %.3f \n " , estado1 , pib1);

    if (pib > pib1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else if (pib > pib1) {
        printf ("Carta 2 - (%s) venceu \n " , estado1 );
    } else
    {
        printf (" Houve um empate\n");
    }
    

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 

    printf (" carta 1 - %s : Turistico  : %.0f \n " , estado , turistico);
    printf (" carta 2 - %s : Turistico  : %.0f \n " , estado1 , turistico1);

    if (turistico > turistico1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else {
        printf ("Carta 2 - (%s) venceu \n " , estado1 );
    }

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 

    printf (" carta 1 - %s : Densidade Populacional : %.3f \n " , estado , densidade);
    printf (" carta 2 - %s : Densidade Populacional   : %.3f \n " , estado1 , densidade1);

    
   
    if ( densidade < densidade1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else {
        printf ("Carta 2 - (%s) venceu \n  " , estado1 );
    }

    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 

    printf (" carta 1 - %s : Pib Percapita : %.3f \n " , estado , percapita );
    printf (" carta 2 - %s : Pib Percapita : %.3f \n " , estado1 , percapita1);

   
    if (percapita > percapita1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else {
        printf ("Carta 2 - (%s) venceu \n " , estado1 );
    }


    printf (" ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n "); 

    printf (" carta 1 - %s : Super Poder : %.3f \n " , estado , superpoder);
    printf (" carta 2 - %s : Super Poder : %.3f \n " , estado1 , superpoder1);
   
    if (superpoder > superpoder1){
        printf ("carta 1 - (%s) venceu \n " , estado  ) ;
    } else {
        printf ("Carta 2 - (%s) venceu \n  " , estado1 );
    }

return 0;

}