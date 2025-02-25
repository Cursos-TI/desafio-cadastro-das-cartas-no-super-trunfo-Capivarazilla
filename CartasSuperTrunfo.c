#include <stdio.h>

int main(){

    char estadoc1, codigoc1[20], cidadec1[64];
    char estadoc2, codigoc2[20], cidadec2[64];
    int populacaoc1, populacaoc2, turismoc1, turismoc2;
    float areac1, areac2, pibc1, pibc2;


    printf("Digite os valores para a primeira carta, começando pelo estado (A a H): \n");
    scanf(" %c", &estadoc1);
    printf("Código: \n");
    scanf(" %s", codigoc1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]%*c", cidadec1);
    printf("População: \n");
    scanf(" %d", &populacaoc1);
    printf("Área: \n");
    scanf(" %f", &areac1);
    printf("PIB: \n");
    scanf(" %f", &pibc1);
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
    scanf(" %f", &areac2);
    printf("PIB: \n");
    scanf(" %f", &pibc2);
    printf("Pontos turísticos: \n");
    scanf(" %d", &turismoc2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoc1);
    printf("Código: %c%s\n", estadoc1, codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %d\nÁrea: %f km²\nPIB: %f reais\nNúmero de Pontos Turísticos: %d\n\n", populacaoc1, areac1, pibc1, turismoc1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estadoc2);
    printf("Código: %c%s\n", estadoc2, codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %d\nÁrea: %f km²\nPIB: %f reais\nNúmero de Pontos Turísticos: %d\n", populacaoc2, areac2, pibc2, turismoc2);


    return 0;
}