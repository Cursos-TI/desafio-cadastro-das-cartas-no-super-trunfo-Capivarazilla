#include <stdio.h>

int main(){

    char estadoc1, codigoc1[20], cidadec1[64];
    char estadoc2, codigoc2[20], cidadec2[64];
    int turismoc1, turismoc2, populacaoc1, populacaoc2;
    double areac1, areac2, pibc1, pibc2;
    double pib_capitac1, pib_capitac2, densidade_popc1, densidade_popc2;

    printf("Digite os valores para a primeira carta, começando pelo estado (A a H): \n");
    scanf(" %c", &estadoc1);
    printf("Código: \n");
    scanf(" %s", codigoc1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]%*c", cidadec1);
    printf("População: \n");
    scanf(" %d", &populacaoc1);
    printf("Área: \n");
    scanf(" %lf", &areac1);
    printf("PIB: \n");
    scanf(" %lf", &pibc1);
    printf("Pontos turísticos: \n");
    scanf(" %d", &turismoc1);

    printf("Digite os valores para a primeira carta, começando pelo estado (A a H): \n");
    scanf(" %c", &estadoc2);
    printf("Código: \n");
    scanf(" %s", codigoc2);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]%*c", cidadec2);
    printf("População: \n");
    scanf(" %d", &populacaoc2);
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
    printf("\n%lf %lf %d %d %lf %lf\n", (pibc1 * 1000000000), (pibc2 * 1000000000), populacaoc1, populacaoc2, pib_capitac1, pib_capitac2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoc1);
    printf("Código: %c%s\n", estadoc1, codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %d\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc1, areac1, pibc1, turismoc1);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc1);
    printf("Pib per capita: %.2f reais\n\n", pib_capitac1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estadoc2);
    printf("Código: %c%s\n", estadoc2, codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %d\nÁrea: %.2lf km²\nPIB: %.2lf bilhoes de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc2, areac2, pibc2, turismoc2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_popc2);
    printf("Pib per capita: %.2f reais", pib_capitac2);

    return 0;
}