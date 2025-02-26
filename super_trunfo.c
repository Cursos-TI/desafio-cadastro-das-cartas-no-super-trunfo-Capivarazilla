#include <stdio.h>

int main(){

    char estadoc1[64], codigoc1[20], cidadec1[64];
    char estadoc2[64], codigoc2[20], cidadec2[64];
    int turismoc1, turismoc2, flag;
    unsigned long int populacaoc1, populacaoc2;
    double areac1, areac2, pibc1, pibc2;
    double pib_capitac1, pib_capitac2, densidade_popc1, densidade_popc2;

    printf("Digite os valores para a primeira carta, começando pela sigla do Estado: \n");
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

    printf("Digite os valores da segunda carta, começando pela sigla do Estado: \n");
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
    printf("Código: %c%s\n", estadoc1, codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc1, areac1, pibc1, turismoc1);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc1);
    printf("Pib per capita: %.2f reais\n\n", pib_capitac1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoc2);
    printf("Código: %c%s\n", estadoc2, codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhoes de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc2, areac2, pibc2, turismoc2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc2);
    printf("Pib per capita: %.2f reais\n\n", pib_capitac2);


    printf("Comparação de Cartas:\n");

    if(populacaoc1 > populacaoc2){
        flag = 1;
        printf("População: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("População: Carta 2 venceu (%d))\n", flag);
    }
    if(areac1 > areac2){
        flag = 1;
        printf("Área: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Área: Carta 2 venceu (%d)\n", flag);
    }
    if(pibc1 > pibc2){
        flag = 1;
        printf("Pib: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Pib: Carta 2 venceu (%d)\n", flag);
    }
    if(turismoc1> turismoc2){
        flag = 1;
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", flag);
    }
    if(densidade_popc1 < densidade_popc2){
        flag = 1;
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", flag);
    }
    if(pib_capitac1 > pib_capitac2){
        flag = 1;
        printf("Pib per Capita: Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Pib per Capita: Carta 2 venceu (%d)\n", flag);
    }
    if(super_poderc1 > super_poderc2){
        flag = 1;
        printf("Carta 1 venceu (%d)\n", flag);
    } else {
        flag = 0;
        printf("Carta 2 venceu (%d)\n", flag);
    }

    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidadec1, estadoc1, densidade_popc1);
    printf("Carta 2 - %s (%s): %.2lf\n", cidadec2, estadoc2, densidade_popc2);

    if(densidade_popc1 < densidade_popc2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidadec1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", cidadec2);


    return 0;
}