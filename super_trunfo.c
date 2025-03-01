#include <stdio.h>

int main(){

    char estadoc1[64], codigoc1[20], cidadec1[64];
    char estadoc2[64], codigoc2[20], cidadec2[64];
    int turismoc1, turismoc2, selecao1, selecao2;
    unsigned long int populacaoc1, populacaoc2;
    double areac1, areac2, pibc1, pibc2, resultado1 = 0, resultado2 = 0;
    double pib_capitac1, pib_capitac2, densidade_popc1, densidade_popc2;

    //Coleta dos dados da primeira carta
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

    //Coleta dos dados da segunda carta
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

    //Calculo dos atributos: densidade populacional, pib per capita e super poder
    densidade_popc1 = populacaoc1 / areac1;
    densidade_popc2 = populacaoc2 / areac2;
    pib_capitac1 = (pibc1 * 1000000000) / (double) populacaoc1;
    pib_capitac2 = (pibc2 * 1000000000) / (double) populacaoc2;
    float super_poderc1 = (float) populacaoc1 + (float) areac1 + (float) pibc1 + (float) turismoc1 + (float) pib_capitac1 + (float) (1/densidade_popc1);
    float super_poderc2 = (float) populacaoc2 + (float) areac2 + (float) pibc2 + (float) turismoc2 + (float) pib_capitac2 + (float) (1/densidade_popc2);
    
    //Início do menu interativo para escolha do primeiro atributo a ser comparado
    printf("Agora iniciaremos a comparação de cartas. Digite a seguir o primeiro atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Pib per capita\n");
    printf("7. SUPER PODER!\n");
    scanf("%d", &selecao1);
    
    //Segundo atributo a ser comparado ( loop para impedir o usuário de escolher o mesmo atributo )
    do{
    printf("Digite a seguir o segundo atributo a ser comparado:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("6. Pib per capita\n");
        printf("7. SUPER PODER!\n");
        scanf("%d", &selecao2);
        if(selecao1 == selecao2)
            printf("Você já escolheu esse atributo, escolha outro.");
    } while (selecao2 == selecao1);

    // Demonstrando atributos das cartas 1 e 2
    printf("\n---Atributos das Cartas---\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estadoc1);
    printf("Código: %s%s\n", estadoc1, codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc1, areac1, pibc1, turismoc1);
    printf("Densidade demográfica: %.2lf hab/km²\n", densidade_popc1);
    printf("Pib per capita: %.2lf reais\n\n", pib_capitac1);
    
    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoc2);
    printf("Código: %s%s\n", estadoc2, codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %lu\nÁrea: %.2lf km²\nPIB: %.2lf bilhoes de reais\nNúmero de Pontos Turísticos: %d\n", populacaoc2, areac2, pibc2, turismoc2);
    printf("Densidade demográfica: %.2lf hab/km²\n", densidade_popc2);
    printf("Pib per capita: %.2lf reais\n\n", pib_capitac2);
    

    //Comparação das cartas baseado na primeira escolha do usuário
    printf("---//Comparação//---\n");
    switch (selecao1)
    {
    case 1:
        printf("População - Carta 1: %lu //VS// Carta 2: %lu\n", populacaoc1, populacaoc2);
        if (populacaoc1 > populacaoc2)
            printf("Vencedor: Carta 1\n");
        else if (populacaoc1 < populacaoc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += populacaoc1;
        resultado2 += populacaoc2;
        break;
    case 2:
        printf("Área - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", areac1, areac2);
        if (areac1 > areac2)
            printf("Vencedor: Carta 1\n");
        else if (areac1 < areac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += areac1;
        resultado2 += areac2;
        break;
    case 3:
        printf("PIB - Carta 1: %.lf //VS// Carta 2: %.lf\n", pibc1, pibc2);
        if (pibc1 > pibc2)
            printf("Vencedor: Carta 1\n");
        else if (pib_capitac1 < pib_capitac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += pibc1;
        resultado2 += pibc2;
        break;
    case 4:
        printf("Número de pontos turísticos - Carta 1: %d //VS// Carta 2: %d\n", turismoc1, turismoc2);
        if (turismoc1 > turismoc2)
            printf("Vencedor: Carta 1\n");
        else if (turismoc1 < turismoc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += turismoc1;
        resultado2 += turismoc2;
        break;
    case 5:
        printf("Densidade Demográfica - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", densidade_popc1, densidade_popc2);
        if (densidade_popc1 < densidade_popc2)
            printf("Vencedor: Carta 1\n");
        else if (densidade_popc1 > densidade_popc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += densidade_popc1;
        resultado2 += densidade_popc2;
        break;
    case 6:
        printf("PIB per capita - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", pib_capitac1, pib_capitac2);
        if (pib_capitac1 > pib_capitac2)
            printf("Vencedor: Carta 1\n");
        else if (pib_capitac1 < pib_capitac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += pib_capitac1;
        resultado2 += pib_capitac2;
        break;
    case 7:
        printf("SUPER PODER - Carta 1: %.2f //VS// Carta 2: %.2f\n", super_poderc1, super_poderc2);
        if (super_poderc1 > super_poderc2)
            printf("Vencedor: Carta 1\n");
        else if (super_poderc1 < super_poderc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += super_poderc1;
        resultado2 += super_poderc2;
        break;
    }

    //Comparação das cartas baseado na segunda escolha do usuário
    switch (selecao2)
    {
    case 1:
        printf("População - Carta 1: %lu //VS// Carta 2: %lu\n", populacaoc1, populacaoc2);
        if (populacaoc1 > populacaoc2)
            printf("Vencedor: Carta 1\n");
        else if (populacaoc1 < populacaoc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += populacaoc1;
        resultado2 += populacaoc2;
        break;
    case 2:
        printf("Área - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", areac1, areac2);
        if (areac1 > areac2)
            printf("Vencedor: Carta 1\n");
        else if (areac1 < areac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += areac1;
        resultado2 += areac2;
        break;
    case 3:
        printf("PIB - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", pibc1, pibc2);
        if (pibc1 > pibc2)
            printf("Vencedor: Carta 1\n");
        else if (pib_capitac1 < pib_capitac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += pibc1;
        resultado2 += pibc2;
        break;
    case 4:
        printf("Número de pontos turísticos - Carta 1: %d //VS// Carta 2: %d\n", turismoc1, turismoc2);
        if (turismoc1 > turismoc2)
            printf("Vencedor: Carta 1\n");
        else if (turismoc1 < turismoc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += turismoc1;
        resultado2 += turismoc2;
        break;
    case 5:
        printf("Densidade Demográfica - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", densidade_popc1, densidade_popc2);
        if (densidade_popc1 < densidade_popc2)
            printf("Vencedor: Carta 1\n");
        else if (densidade_popc1 > densidade_popc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += densidade_popc1;
        resultado2 += densidade_popc2;
        break;
    case 6:
        printf("PIB per capita - Carta 1: %.2lf //VS// Carta 2: %.2lf\n", pib_capitac1, pib_capitac2);
        if (pib_capitac1 > pib_capitac2)
            printf("Vencedor: Carta 1\n");
        else if (pib_capitac1 < pib_capitac2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += pib_capitac1;
        resultado2 += pib_capitac2;
        break;
    case 7:
        printf("SUPER PODER - Carta 1: %.2f //VS// Carta 2: %.2f\n", super_poderc1, super_poderc2);
        if (super_poderc1 > super_poderc2)
            printf("Vencedor: Carta 1\n");
        else if (super_poderc1 < super_poderc2)
            printf("Vencedor: Carta 2\n");
        else
            printf("Empate entre os atributos das duas carta!\n");
        resultado1 += super_poderc1;
        resultado2 += super_poderc2;
        break;
    }

    //Cálculo e amostragem dos valores das somas dos atributos comparados para o usuário
    printf("Soma dos atributos selecionados para a Carta 1: %.2lf\n", resultado1);
    printf("Soma dos atributos selecionados para a Carta 2: %.2lf\n", resultado2);
    if (resultado1 > resultado2)
        printf("Carta 1 ganhou na soma!\n");
    else if (resultado1 < resultado2)
        printf("Carta 2 ganhou na soma!\n");
    else
        printf("Empate na soma e na rodada!\n");



   
    return 0;
}