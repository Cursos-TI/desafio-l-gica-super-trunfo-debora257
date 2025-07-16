#include <stdio.h>

int main() {
    char estado1, estado2;
    char carta1[10], carta2[10];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturistico1, pontosturistico2;
    float densidade1, densidade2;
    float capita1, capita2;
    float poder1, poder2;
    unsigned int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;


    //dados da carta 1
    printf("Carta 1\n");
    printf("Digite estado:");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o codigo da carta:\n");
    scanf(" %s", carta1);

    printf("Digite o nome da cidade sem espaco:\n");
    scanf(" %s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area:\n");
    scanf("%f", &area1);

    printf("Digite PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturistico1);

    //calculando para encontra outras informacao
    densidade1 = (populacao1 / area1);
    capita1 = (pib1 / (float)populacao1);

    //dados da carta 2
    printf("Carta 2\n");
    printf("Digite estado:\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta:\n");
    scanf(" %s", carta2);

    printf("Digite o nome da cidade sem espaco:\n");
    scanf(" %s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area:\n");
    scanf("%f", &area2);

    printf("Digite PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturistico2);

    //calculando para encontra outras informacao
    densidade2 = (populacao2 / area2);
    capita2 = (pib2 / (float)populacao2);

    //imprimindo os dados
    printf("\n ***Dados da Carta 1*** \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", carta1);
    printf("Nome da Cidade: %.2s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturistico1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    printf("\n ***Dados da Carta 2*** \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", carta2);
    printf("Nome da Cidade: %.2s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturistico2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    //calculando super poder
    poder1 = populacao1 + area1 + pib1 + pontosturistico1 + capita1 + (1/ densidade1);
    poder2 = populacao2 + area2 + pib2 + pontosturistico2 + capita2 + (1 / densidade2);
    printf("O super poder da carta %s e : %.2f\n", carta1, poder1);
    printf("O super poder da carta %s e: %.2f\n", carta2, poder2);

    //calculando vencedor
    printf("***Populacao***\n");
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
    
    printf("***Area***\n");
    if(area1 > area2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
  
    printf("***PIB***\n");
    if(pib1 > pib2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
 
    printf("***Pontos Turisticos***\n");
    if(pontosturistico1 > pontosturistico2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    printf("***Densidade***\n");
    if(densidade1 > densidade2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
 
    printf("***PIB per Capita***\n");
    if(capita1  > capita2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }


    return 0;
}