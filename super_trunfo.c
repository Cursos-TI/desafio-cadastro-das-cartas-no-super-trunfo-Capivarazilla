#include <stdio.h>

int main(){

    char estadoc1[64], codigoc1[20], cidadec1[64];
    char estadoc2[64], codigoc2[20], cidadec2[64];
    int turismoc1, turismoc2, flag, selecao;
    unsigned long int populacaoc1, populacaoc2;
    double areac1, areac2, pibc1, pibc2;
    double pib_capitac1, pib_capitac2, densidade_popc1, densidade_popc2;

    printf("Digite os valores para a primeira carta, começando pelo Estado/País: \n");
    scanf(" %[^\n]%*c", estadoc1);
    printf("Código: \n");
    scanf(" %s", codigoc1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]%*c", cidadec1);
    printf("População: \n");
    scanf(" %lu", &populacaoc1);
    printf("Área: \n");
    scanf(" %lf", &areac1);
    printf("PIB: \n");
    scanf(" %lf", &pibc1);
    printf("Pontos turísticos: \n");
    scanf(" %d", &turismoc1);

    printf("Digite os valores da segunda carta, começando pelo Estado/País: \n");
    scanf(" %[^\n]%*c", estadoc2);
    printf("Código: \n");
    scanf(" %s", codigoc2);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]%*c", cidadec2);
    printf("População: \n");
    scanf(" %lu", &populacaoc2);
    printf("Área: \n");
    scanf(" %lf", &areac2);
    printf("PIB: \n");
    scanf(" %lf", &pibc2);
    printf("Pontos turísticos: \n");
    scanf(" %d", &turismoc2);

    densidade_popc1 = populacaoc1 / areac1;
    densidade_popc2 = populacaoc2 / areac2;
    pib_capitac1 = (pibc1 * 1000000000) / (double) populacaoc1;
    pib_capitac2 = (pibc2 * 1000000000) / (double) populacaoc2;
    float super_poderc1 = (float) populacaoc1 + (float) areac1 + (float) pibc1 + (float) turismoc1 + (float) pib_capitac1 + (float) (densidade_popc1 * -1);
    float super_poderc2 = (float) populacaoc2 + (float) areac2 + (float) pibc2 + (float) turismoc2 + (float) pib_capitac2 + (float) (densidade_popc2 * -1);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estadoc1);
    printf("Código: %s%s\n", estadoc1, codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc1, areac1, pibc1, turismoc1);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc1);
    printf("Pib per capita: %.2f reais\n\n", pib_capitac1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoc2);
    printf("Código: %s%s\n", estadoc2, codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhoes de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc2, areac2, pibc2, turismoc2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc2);
    printf("Pib per capita: %.2f reais\n\n", pib_capitac2);


    printf("Agora iniciaremos a comparação de cartas. Digite a seguir o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &selecao);

    switch (selecao)
    {
    case 1:
        printf("Estados/Países sendo comparados:\n Carta 1: %s\n Carta 2: %s\n", estadoc1, estadoc2);
        printf("Atributo sendo comparado: População\n");
        printf("Valores dos atributos:\n Carta 1: %lu --//-- Carta 2: %lu\n", populacaoc1, populacaoc2);
        if(populacaoc1 > populacaoc2)
            printf("População: Carta 1 venceu\n");
        else if(populacaoc2 > populacaoc1)
            printf("População: Carta 2 venceu \n");
        else
            printf("Empate entre as cartas!");
        break;
    case 2:
        printf("Estados/Países sendo comparados:\n Carta 1: %s\n Carta 2: %s\n", estadoc1, estadoc2);
        printf("Atributo sendo comparado: Área\n");
        printf("Valores dos atributos:\n Carta 1: %.2lf --//-- Carta 2: %.2lf\n", areac1, areac2);
        if(areac1 > areac2)
            printf("Área: Carta 1 venceu \n");
        else if(areac2 > areac1)
            printf("Área: Carta 2 venceu \n");
        else
            printf("Empate entre as cartas!");
        break;
    case 3:
        printf("Estados/Países sendo comparados:\n Carta 1: %s\n Carta 2: %s\n", estadoc1, estadoc2);
        printf("Atributo sendo comparado: PIB\n");
        printf("Valores dos atributos:\n Carta 1: %.2lf --//-- Carta 2: %.2lf\n", pibc1, pibc2);
        if(pibc1 > pibc2)
            printf("Área: Carta 1 venceu \n");
        else if(pibc2 > pibc1)
            printf("Área: Carta 2 venceu \n");
        else
            printf("Empate entre as cartas!");
        break;
    case 4:
        printf("Estados/Países sendo comparados:\n Carta 1: %s\n Carta 2: %s\n", estadoc1, estadoc2);
        printf("Atributo sendo comparado: Número de pontos turísticos\n");
        printf("Valores dos atributos:\n Carta 1: %d --//-- Carta 2: %d\n", turismoc1, turismoc2);
        if(turismoc1 > turismoc2)
            printf("Área: Carta 1 venceu \n");
        else if(turismoc2 > turismoc1)
            printf("Área: Carta 2 venceu \n");
        else
            printf("Empate entre as cartas!");
        break;
    case 5:
        printf("Estados/Países sendo comparados:\n Carta 1: %s\n Carta 2: %s\n", estadoc1, estadoc2);
        printf("Atributo sendo comparado: Densidade Demográfica\n");
        printf("Valores dos atributos:\n Carta 1: %.2lf --//-- Carta 2: %.2lf\n", densidade_popc1, densidade_popc2);
        if(densidade_popc2 > densidade_popc1)
            printf("Área: Carta 1 venceu \n");
        else if(densidade_popc1 > densidade_popc2)
            printf("Área: Carta 2 venceu \n");
        else
            printf("Empate entre as cartas!");
        break;
    default:
        printf("Opção inválida.");
        break;
    }

    return 0;
}