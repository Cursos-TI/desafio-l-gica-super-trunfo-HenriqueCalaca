#include <stdio.h>

int main () {

/* Declarando Tipo de Variaveis */
    char c1_estado = 'A' , c2_estado = 'H';
    char c1_codigo_carta[4] = "A01" , c2_codigo_carta[4] = "H02" ;
    char c1_nome_cidade[20] = "Teresina" , c2_nome_cidade[20] = "Parnaíba";
    unsigned int c1_populacao = 866000 , c2_populacao = 160000 ;
    float c1_area = 1345 , c2_area = 435 ; 
    float c1_pib = 27000000 , c2_pib = 270000 ;
    int c1_qtd_pontos_turisticos = 20 , c2_qtd_pontos_turisticos = 20 ;
    float c1_pib_percapita, c2_pib_percapita;
    float c1_densidade_populacional, c2_densidade_populacional;
    float c1_Super_Poder , c2_Super_Poder; 

      /* Calculando Variaveis  *
    
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


    /* Escolhendo Atributo*/

    int atributo;

    printf("Escolha o Atributo que será usado para comparação das cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Túristicos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo);
    
    switch (atributo)
    {
    case 1:
        if(c1_populacao > c2_populacao){
            printf("#### A Carta 1 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2: %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("População c1: %d - População c2: %d\n", c1_populacao, c2_populacao);
        } else if (c1_populacao < c2_populacao){
            printf("#### A Carta 2 venceu ####");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("População c1: %d - População c2: %d\n", c1_populacao, c2_populacao);
        } else {
            printf("#### Empate! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("População c1: %d - População c2: %d\n", c1_populacao, c2_populacao);
        }
        break;
    case 2:
        if(c1_area > c2_area){
            printf("#### A Carta 1 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2: %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Área c1: %d - Área c2: %d\n", c1_area, c2_area);
        } else if (c1_area < c2_area){
            printf("#### A Carta 2 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Área c1: %d - Área c2: %d\n", c1_area, c2_area);
        } else {
            printf("#### Empate! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Área c1: %d - Área c2: %d\n", c1_area, c2_area);
        }
        break;
    case 3:
        if(c1_pib > c2_pib){
            printf("#### A Carta 1 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2: %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("PIB c1: %.2f - PIB c2: %.2f\n", c1_pib, c2_pib);
        } else if (c1_pib < c2_pib){
            printf("#### A Carta 2 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("PIB c1: %.2f - PIB c2: %.2f\n", c1_pib, c2_pib);
        } else {
            printf(" #### Empate! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("PIB c1: %.2f- PIB c2: %.2f\n", c1_pib, c2_pib);
        }
        break;
    case 4:
        if(c1_qtd_pontos_turisticos > c2_qtd_pontos_turisticos){
            printf("#### A Carta 1 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2: %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Pontos Túristicos c1: %d - Pontos Túristicos c2: %d\n", c1_qtd_pontos_turisticos, c2_qtd_pontos_turisticos);
        } else if (c1_qtd_pontos_turisticos < c2_qtd_pontos_turisticos){
            printf("#### A Carta 2 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Pontos Túristicos c1: %d - Pontos Túristicos c2: %d\n", c1_qtd_pontos_turisticos, c2_qtd_pontos_turisticos);
        } else {
            printf("#### Empate! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Pontos Túristicos c1: %d - Pontos Túristicos c2: %d\n", c1_qtd_pontos_turisticos, c2_qtd_pontos_turisticos);
        }
        break;
    case 5:
        if(c1_densidade_populacional < c2_densidade_populacional){
            printf("#### A Carta 1 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2: %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Densidade Populacional: %.2f - Densidade Populacional c2: %.2f\n", c1_densidade_populacional, c2_densidade_populacional);
        } else if (c1_densidade_populacional > c2_densidade_populacional){
            printf("#### A Carta 2 venceu! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Densidade Populacional: %.2f - Densidade Populacional c2: %.2f\n", c1_densidade_populacional, c2_densidade_populacional);
        } else {
            printf("#### Empate! ####\n");
            printf("Codigo c1:  %s - Codigo c2 %s\n", c1_codigo_carta, c2_codigo_carta);
            printf("Cidade 1: %s - Cidade 2: %s\n", c1_nome_cidade, c2_nome_cidade);
            printf("Densidade Populacional: %.2f - Densidade Populacional c2: %.2f\n", c1_densidade_populacional, c2_densidade_populacional);
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    
    return 0;

}