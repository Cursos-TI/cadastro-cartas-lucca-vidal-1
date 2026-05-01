#include <stdio.h>
 
int main() {

    //carta 1
    char estado;
    char nome_cidade[50]; 
    char codigo_carta[50];
    int populacao, pont_turistico;
    float area_cidade, PIB, densidade_pop, PIB_capita, super_poder;//para o terceiro desafio foi adicionadar o super poder

    //carta 2
    char estado2;
    char nome_cidade2[50]; 
    char codigo_carta2[50];
    int populacao2, pont_turistico2;
    float area_cidade2, PIB2, densidade_pop2, PIB_capita2, super_poder2;//para o terceiro desafio foi adicionadar o super poder

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

    //calculo para a densidade da população carta 1 e 2
    
    densidade_pop = populacao / area_cidade;
    densidade_pop2 = populacao2 / area_cidade2;

    //calculo PIB capita carta 1 e 2
     
    PIB_capita = PIB / populacao;
    PIB_capita2 = PIB2 / populacao2;

    //calculo super poder

    float inverso_densi = 1.0 / densidade_pop;
    float inverso_densi2 = 1.0 / densidade_pop2;

    super_poder = (float) populacao + area_cidade + PIB + (float) pont_turistico + PIB_capita + inverso_densi;
    super_poder2 = (float) populacao2 + area_cidade2 + PIB2+ (float) pont_turistico2 + PIB_capita2 + inverso_densi2;


    //----- EXIBIÇÃO -----  
    printf("\n----Informações carta 1---- \n");
    printf("Código: %s\n", codigo_carta);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.5f KM²\n", area_cidade);
    printf("PIB: %.5f Bilhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", pont_turistico);
    printf("Densidade Populacional: %.2f\n", densidade_pop);
    printf("PIB per Capita: %.2f\n", PIB_capita);
    printf("Super poder: %.2f\n", super_poder);

    printf("\n----Informações carta 2---- \n");
    printf("Código: %s\n", codigo_carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.5f KM²\n", area_cidade2);
    printf("PIB: %.5f Bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pont_turistico2);
    printf("Densidade Populacional: %.2f\n", densidade_pop2);
    printf("PIB per Capita: %.2f\n", PIB_capita2);
    printf("Super poder: %.2f\n", super_poder2);


    //comparação cartas

    printf("\n----VITÓRIAS CARTA 1----\n");
    printf("população: carata 1 vence? (%d)\n", populacao >= populacao2);
    printf("área: carata 1 vence? (%d)\n", area_cidade >= area_cidade2);
    printf("PIB: carata 1 vence? (%d)\n", PIB >= PIB2);
    printf("Pontos turisticos: carata 1 vence? (%d)\n", pont_turistico >= pont_turistico2);
    printf("densidade populacional: carata 1 vence? (%d)\n", densidade_pop >= densidade_pop2);
    printf("PIB per capita: carata 1 vence? (%d)\n", PIB_capita >= PIB_capita2);
    printf("Super poder: carata 1 vence? (%d)\n", super_poder >= super_poder2);

    printf("\n----VITORIAS CARTA 2----\n");
    printf("população: carata 2 vence? (%d)\n", populacao2 >= populacao);
    printf("área: carata 2 vence? (%d)\n", area_cidade2 >= area_cidade);
    printf("PIB: carata 2 vence? (%d)\n", PIB2 >= PIB);
    printf("Pontos turisticos: carata 2 vence? (%d)\n", pont_turistico2 >= pont_turistico);
    printf("densidade populacional: carata 2 vence? (%d)\n", densidade_pop2 >= densidade_pop);
    printf("PIB per capita: carata 2 vence? (%d)\n", PIB_capita2 >= PIB_capita);
    printf("Super poder: carata 2 vence? (%d)\n", super_poder2 >= super_poder);


    return 0;
}
