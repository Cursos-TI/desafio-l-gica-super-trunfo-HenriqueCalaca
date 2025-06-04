#include <stdio.h>

int main () {

/* Declarando Tipo de Variaveis */
    char c1_estado , c2_estado ;
    char c1_codigo_carta[4]  , c2_codigo_carta[4] ;
    char c1_nome_cidade[20] , c2_nome_cidade[20] ;
    unsigned int c1_populacao, c2_populacao ;
    float c1_area , c2_area  ; 
    float c1_pib , c2_pib ;
    int c1_qtd_pontos_turisticos , c2_qtd_pontos_turisticos ;
    float c1_pib_percapita, c2_pib_percapita;
    float c1_densidade_populacional, c2_densidade_populacional;
    float c1_Super_Poder , c2_Super_Poder; 

/* Recebendo dados do Usuário */

    /*  Carta 1 */
    printf("Bem vindo ao jogo, nesse primeiro momento você vai cadastrar duas cartas \n");
    printf("e suas respectivas caractristicas de acordo com a descrição! \n");

    printf("Insira os dados da primeira carta abaixo! \n");

    printf("Escolha uma letra de A a H para representar sua primeira carta \n");
    scanf(" %c", &c1_estado);

    printf("Insira a letra escolhida (%c) e escolha um numero de 01 a 04 para criar o codigo da sua carta \n", c1_estado);
    scanf("%s", c1_codigo_carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", c1_nome_cidade);

    printf("Agora informe qual a população da cidade %s \n", c1_nome_cidade);
    scanf("%d", &c1_populacao);

    printf("Iforme a Area (em Km) da cidade %s \n", c1_nome_cidade);
    scanf("%f", &c1_area);

    printf("Qual o PIB da cidade %s ? \n", c1_nome_cidade);
    scanf("%f", &c1_pib);

    printf("Quantos pontos turisticos possuem a cidade %s ? \n", c1_nome_cidade);
    scanf("%d", &c1_qtd_pontos_turisticos);

    printf("Perfeito, agora vamos inserir os dados da segunda carta! \n");

    /*  Carta 2  */
    printf("Escolha uma letra de A a H para representar sua segunda carta \n");
    scanf(" %c", &c2_estado);

    printf("Insira a letra escolhida (%c) e escolha um numero de 01 a 04 para criar o codigo da sua carta \n", c2_estado);
    scanf("%s", c2_codigo_carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", c2_nome_cidade);

    printf("Agora informe qual a população da cidade %s \n", c2_nome_cidade);
    scanf("%d", &c2_populacao);

    printf("Iforme a Area (em Km) da cidade %s \n", c2_nome_cidade);
    scanf("%f", &c2_area);

    printf("Qual o PIB da cidade %s ? \n", c2_nome_cidade);
    scanf("%f", &c2_pib);

    printf("Quantos pontos turisticos possuem a cidade %s ? \n", c2_nome_cidade);
    scanf("%d", &c2_qtd_pontos_turisticos);

    /* Calculando Variaveis  */
    
    /* Carta 1*/
    c1_densidade_populacional = (float) c1_populacao / c1_area ;
    c1_pib_percapita = (float) c1_pib / c1_populacao ;
    c1_Super_Poder = (float) (c1_area + c1_populacao + c1_qtd_pontos_turisticos + c1_pib + c1_pib_percapita) - c1_densidade_populacional;

    /*Carta 2*/
    c2_densidade_populacional = (float) c2_populacao / c2_area ;
    c2_pib_percapita = (float) c2_pib / c2_populacao ;
    c2_Super_Poder = (float) (c2_area + c2_populacao + c2_qtd_pontos_turisticos + c2_pib + c2_pib_percapita) - c2_densidade_populacional;

    printf("----------------------------------------------- \n");
    printf("----------------------------------------------- \n");

    /* Imprimindo dados das cartas*/

    /* Carta 1*/
    printf("Carta 1: \n");
    printf("Estado: %c\n", c1_estado);
    printf("Codigo: %s\n", c1_codigo_carta);
    printf("Nome da Cidade: %s\n", c1_nome_cidade);
    printf("População: %d\n", c1_populacao);
    printf("Área: %.2f\n", c1_area);
    printf("PIB %.2f\n", c1_pib);
    printf("Número de Pontos Turísticos: %d\n", c1_qtd_pontos_turisticos);
    printf("Densidade Populacional %.2f\n", c1_densidade_populacional);
    printf("PIB per Capita %.2f\n", c1_pib_percapita);
    printf("Super Poder %.2f\n", c1_Super_Poder);

    printf("----------------------------------------------- \n");
    printf("----------------------------------------------- \n");

    /* Carta 2*/
    printf("Carta 2: \n");
    printf("Estado: %c\n", c2_estado);
    printf("Codigo: %s\n", c2_codigo_carta);
    printf("Nome da Cidade: %s\n", c2_nome_cidade);
    printf("População: %d\n", c2_populacao);
    printf("Área: %.2f\n", c2_area);
    printf("PIB %.2f\n", c2_pib);
    printf("Número de Pontos Turísticos: %d\n", c2_qtd_pontos_turisticos);
    printf("Densidade Populacional %.2f\n", c2_densidade_populacional);
    printf("PIB per Capita %.2f\n", c2_pib_percapita);
    printf("Super Poder %.2f\n", c2_Super_Poder);

    printf("----------------------------------------------- \n");
    printf("----------------------------------------------- \n");

    int resultado1 = c1_populacao > c2_populacao,
    resultado2 = c1_area > c2_area,
    resultado3 = c1_pib > c2_pib,
    resultado4 = c1_qtd_pontos_turisticos > c2_qtd_pontos_turisticos,
    resultado5 = c1_pib_percapita > c2_pib_percapita,
    resultado6 = c1_densidade_populacional < c2_densidade_populacional,
    resultado7 = c1_Super_Poder > c2_Super_Poder ;

    /* Validação*/
    printf("Agora vamos comparar o poder das cartas, se o resultado for 1 a carta %s venceu \n", c1_codigo_carta);
    printf("se for 0 a carta %s vence! \n", c2_codigo_carta);

    printf("Carta com Maior População: %d\n" , resultado1);
    printf("Carta com Maior area: %d\n" , resultado2);
    printf("Carta com Maior PIB: %d\n" , resultado3);
    printf("Carta com Maior Quantidade de Pontos Turisticos: %d\n" , resultado4);
    printf("Carta com Maior PIB Per Capita: %d\n" , resultado5);
    printf("Carta com Menor Densidade Populacional: %d\n" , resultado6);
    printf("Carta com Maior Super Poder: %d\n" , resultado7);

    /* Comparação de um atributo escolhido */
    /* Atributo escolhido : Super Poder */

    if ( c1_Super_Poder > c2_Super_Poder) {
        printf("Carta 1 - %s : %.2f \n", c1_nome_cidade, c1_Super_Poder);
        printf("Carta 2 - %s : %.2f \n", c2_nome_cidade, c2_Super_Poder);
        printf("Resultado: Carta 1 (%s) venceu! \n", c1_nome_cidade);
    }else {
        printf("Carta 1 - %s : %.2f \n", c1_nome_cidade, c1_Super_Poder);
        printf("Carta 2 - %s : %.2f\n", c2_nome_cidade, c2_Super_Poder);
        printf("Resultado: Carta 1 (%s) venceu! \n", c2_nome_cidade);
    }
    
    return 0;
    
}
    