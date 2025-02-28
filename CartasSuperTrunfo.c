#include <stdio.h>

// Desafio Super Trunfo - Países          
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       
    int  turistico , codigo , area ;
    float pib , populacao ;
    char estado [50] , cidade [50] , carta [50] ;

    printf("Digite sua carta 1 : \n");
    scanf("%s", &carta);

    printf("Digite o seu estado : \n");
    scanf("%s", &estado);

    printf("Digite a sua cidade : \n" );
    scanf("%s", cidade);

    printf("Digite a população : \n" );
    scanf ("%d" , populacao );

    printf("Digite o PIB : \n" );
    scanf("%f", pib );

    printf("Digite os pontos turísticos : \n" );
    scanf("%d", turistico );

    printf ("  carta  : %s \n estado : %s \n ", carta , estado );
    printf ("codigo : %s \n " , estado );
    printf ("nome da cidade : %s \n " , cidade );
    printf ("População : %d \n " , populacao );
    printf ("Área   : %f  \n " , area );
    printf ("PIB    : %f \n " , pib );
    printf ("Números de Pontos Túristicos : %d " , turistico );

   

return 0;

}
