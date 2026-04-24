#include <stdio.h>
 
int main() {
    
    //carta 1
    char estado;
    char nome_cidade[50]; 
    char codigo_carta[50];
    int populacao, pont_turistico;
    float area_cidade, PIB;

    //carta 2
    char estado2;
    char nome_cidade2[50]; 
    char codigo_carta2[50];
    int populacao2, pont_turistico2;
    float area_cidade2, PIB2;

    //Informações carta 1
    printf("Informações carta 1 \n");
   
    printf("Qual o estado (A, B, C, D, E, F, G, H): \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (letra do estado seguido de um número de 01 a 03): \n");
    scanf(" %s", &codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_cidade);
 
    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao);

    printf("Digite a area da cidade (em KM²): \n");
    scanf(" %f", &area_cidade);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos da cidade; \n");
    scanf(" %i", &pont_turistico);
 
    //Informações carta 2

    printf("Informações carta 2 \n");
   
    printf("Qual o estado (A, B, C, D, E, F, G, H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (letra do estado seguido de um número de 01 a 03): \n");
    scanf(" %s", &codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_cidade2);
 
    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao2);

    printf("Digite a area da cidade (em KM²): \n");
    scanf(" %f", &area_cidade2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da cidade; \n");
    scanf(" %i", &pont_turistico2);

    //----- EXIBIÇÃO -----  
    printf("----Informações carta 1---- \n");
    printf("Código: %s\n", codigo_carta);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f KM²\n", area_cidade);
    printf("PIB: %f Bilhões de reias\n", PIB);
    printf("Pontos turísticos: %d\n", pont_turistico);

    printf("----Informações carta 2---- \n");
    printf("Código: %s\n", codigo_carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f KM²\n", area_cidade2);
    printf("PIB: %f Bilhões de reias\n", PIB2);
    printf("Pontos turísticos: %d\n", pont_turistico2);
   
   
    return 0;
}
