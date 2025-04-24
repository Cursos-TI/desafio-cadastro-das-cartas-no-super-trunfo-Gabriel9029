
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
        
        char Estado[50], Codigo[50], Nome_da_cidade[50];  /*Aqui estão localizados as respectivas variavéis de cada atributo.*/
        int Populacao, NPT;
        float Area, PIB,Densidade_Populacional, PIB_Per_Capita;


        printf("Vamos Começar. \n");
        printf("A seguir, informe os dados de suas cartas. \n");
    
        printf("Para a primeira carta, informe o Estado:"); /*a partir daqui, as informações são solicitadas e então analisadas pelo scanf.*/
        scanf(" %s", Estado);
    
        printf("Informe o Codigo:");
        scanf(" %s", Codigo);
    
        printf("Informe o Nome da Cidade:");
        scanf(" %s", Nome_da_cidade);
    
        printf("Informe a populacao:");
        scanf("%d", &Populacao);
    
        printf("Informe a Area:");
        scanf("%f", &Area);
    
        printf("Informe o PIB:");
        scanf("%f", &PIB);
    
        printf("Informe o Numero de Pontos Turisticos:");
        scanf("%d", &NPT);
    
        Densidade_Populacional = Populacao / Area;
        PIB_Per_Capita = (PIB * 1000000000) / Populacao;

        printf("Carta 1: \n");          /*Até serem entregues ao usuário no formato exigido pelo desafio.*/
        printf("Estado: %s\n", Estado);
        printf("Codigo: %s\n", Codigo);
        printf("Nome da Cidade: %s\n", Nome_da_cidade);
        printf("Populacao: %d\n", Populacao);
        printf("Area: %.2fkm²\n", Area);
        printf("PIB: %.f bilhoes de reais\n", PIB);
        printf("Numero de Pontos Turisticos: %d\n", NPT);
        printf("Densidade Populacional:" "%.2fhab/km²\n", Densidade_Populacional);
        printf("PIB per capita: %.2f\n", PIB_Per_Capita);

        printf("Agora, os dados da segunda carta. \n"); /*A segunda carta é então solicitada.*/
    
        printf("Informe o Estado:");
        scanf(" %s", Estado);
    
        printf("Informe o Codigo:");
        scanf(" %s", Codigo);
    
        printf("Informe o Nome da Cidade:");
        scanf(" %s", Nome_da_cidade);
    
        printf("Informe a populacao:");
        scanf("%d", &Populacao);
    
        printf("Informe a Area:");
        scanf("%f", &Area);
    
        printf("Informe o PIB:");
        scanf("%f", &PIB);
    
        printf("Informe o Numero de Pontos Turisticos:");
        scanf("%d", &NPT);
    
        Densidade_Populacional = Populacao / Area;
        PIB_Per_Capita = (PIB * 1000000000)/ Populacao;

        printf("Carta 2: \n");    
        printf("Estado: %s\n", Estado);
        printf("Codigo: %s\n", Codigo);
        printf("Nome da Cidade: %s\n", Nome_da_cidade);
        printf("Populacao: %d\n", Populacao);
        printf("Area: %.2fkm²\n", Area);
        printf("PIB: %.2f bilhoes de reais\n", PIB);
        printf("Numero de Pontos Turisticos: %d\n", NPT);
        printf("Densidade Populacional:" "%.2fhab/km²\n", Densidade_Populacional);
        printf("PIB per capita: %.2f\n", PIB_Per_Capita); /*E por fim o codigo se encerra ao emitir a ultima carta. */
    
        return 0;
}
