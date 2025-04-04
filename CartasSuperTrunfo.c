#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[1], estado2[1]; // cria entrada e saida de uma unica letra.
    char codigo1[3], codigo2[3],cidade1[20], cidade2[20] ; //cria entrada e saida de varios caracteres.
    int populacao1=0, populacao2=0, pturistico1=0, pturistico2=0; //cria entrada e saida numeros inteiros.
    float area1=0, area2=0, pib1=0, pib2=0; //cria ewntrada e saida de numeros com pontos flutuantes.
    float denpopula1=0, denpopula2=0, pibpercapita1=0, pibpercapita2=0;//cria novos calculos noprograma
    
    printf("*********  Jogo Cartas Super Trunfo  *********\n\n\n"); 

    printf("Digite de A a H: "); //entrada de texto para o usuario cadastrar os dados. 
    scanf("%s",estado1); //informar onde armazenar o que foi digitado.

    printf("Digite o Codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",cidade1);

    printf("Digite a Populacao: ");
    scanf("%d",&populacao1);

    printf("Digite a Area da Cidade: ");
    scanf("%f",&area1);

    printf("Digite o Pib da Cidade: ");
    scanf("%f",&pib1);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d",&pturistico1);

    printf("\n\n\n"); //cria uma quebra para separar o cadastro das cartas.

    printf("Digite de A a H: ");
    scanf("%s",estado2);

    printf("Digite o Codigo da Carta 2: ");
    scanf("%s",codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",cidade2);

    printf("Digite a Populacao: ");
    scanf("%d",&populacao2);

    printf("Digite a Area da Cidade: ");
    scanf("%f",&area2);

    printf("Digite o Pib da Cidade: ");
    scanf("%f",&pib2);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d",&pturistico2);
    
    //incrementado novos calculos no jogo
    denpopula1 = populacao1 / area1;
    denpopula2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    printf("\n\n\n"); //quebra de linha para separar o cadastro, da exebição na tela para o usuario.

    //imprime na tela os dados que foi cadatrado pelo usuario.
    printf("Carta 1:\n");
    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("Pib: %.2f bilhoes de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n",pturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopula1);
    printf("PIB per Capita: %.2f reais\n\n\n",pibpercapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("Pib: %.2f bilhoes de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopula2);
    printf("PIB per Capita: %.2f reais\n",pibpercapita2);


    return 0;
}
