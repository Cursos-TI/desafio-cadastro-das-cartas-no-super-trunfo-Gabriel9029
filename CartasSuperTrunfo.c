
 #include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pib_pc1, pib_pc2, super_poder1, super_poder2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (milhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (milhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_pc1 = pib1 / populacao1;
    pib_pc2 = pib2 / populacao2;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_pc1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_pc2 + (1 / densidade2);

    // Exibir dados da carta 1
    printf("\nCarta 1: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f pessoas por km²\n", densidade1);
    printf("PIB per capita: %.6f milhões\n", pib_pc1);
    printf("Super poder: %.4f\n", super_poder1);

    // Exibir dados da carta 2
    printf("\nCarta 2: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f pessoas por km²\n", densidade2);
    printf("PIB per capita: %.6f milhões\n", pib_pc2);
    printf("Super poder: %.4f\n", super_poder2);

    // Comparações: 1 = carta 1 ganha, 0 = carta 2 ganha, 2 = empate
    printf("\nComparações:\n");

    printf("População: %d\n", (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 0 : 2);
    printf("Área: %d\n", (area1 > area2) ? 1 : (area1 < area2) ? 0 : 2);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : (pib1 < pib2) ? 0 : 2);
    printf("Pontos turísticos: %d\n", (pontos1 > pontos2) ? 1 : (pontos1 < pontos2) ? 0 : 2);
    printf("Densidade (menor vence): %d\n", (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 0 : 2);
    printf("PIB per capita: %d\n", (pib_pc1 > pib_pc2) ? 1 : (pib_pc1 < pib_pc2) ? 0 : 2);
    printf("Super poder: %d\n", (super_poder1 > super_poder2) ? 1 : (super_poder1 < super_poder2) ? 0 : 2);

    return 0;
}
