#include <stdio.h>

int main(){

	char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    unsigned int populacao1, populacao2;
    double area1, area2;
    long double PIB1, PIB2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;
    long double superpoder1, superpoder2;


    printf("Vamos cadastrar uma carta !\n");
	printf("Começaremos com a carta 1\n\n");
    printf("____________________\n\n");

    printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
        scanf(" %c", &estado1);

    printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
        scanf(" %s", &codigo1);

    printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
        scanf(" %s", &nomedacidade1);

    printf("Informe a população apenas com números: \n");
        scanf(" %u", &populacao1);

    printf("Qual a àrea? \n");
        scanf(" %lf", &area1);

    printf("Qual é o PIB? \n");
        scanf(" %Lf", &PIB1);

    printf("Quanrtos pontos turísticos? \n");
        scanf(" %d", &numerodepontosturisticos1);

    densidadepopulacional1 = (double) populacao1 / area1;
    PIBpercapta1 = (long double) PIB1 / populacao1;
    superpoder1 = (long double) populacao1 + area1 + PIB1 + numerodepontosturisticos1 + PIBpercapta1 - densidadepopulacional1;

// Aqui exibirei os dados coletados

    printf("____________________\n\n");
    printf("A carta 1 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2Lf\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta1);
    printf("Super Poder: %.2Lf\n\n", superpoder1);

// Agora coletaremos as informações para a carta 2

	printf("Agora a carta 2\n\n");
    printf("____________________\n\n");

	printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
	scanf(" %c", &estado2);

	printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
	scanf(" %s", &codigo2);

	printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
	scanf(" %s", &nomedacidade2);

	printf("Informe a população apenas com números: \n");
	scanf(" %u", &populacao2);

	printf("Qual a àrea? \n");
	scanf(" %lf", &area2);

	printf("Qual é o PIB? \n");
	scanf(" %Lf", &PIB2);

	printf("Quanrtos pontos turísticos? \n");
	scanf(" %d", &numerodepontosturisticos2);

    densidadepopulacional2 = (double) populacao2 / area2;
    PIBpercapta2 = (long double) PIB2 / populacao2;
    superpoder2 = (long double) populacao2 + area2 + PIB2 + numerodepontosturisticos2 + PIBpercapta2 - densidadepopulacional2;

	printf("____________________\n\n");
    printf("A carta 2 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2Lf\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta2);
    printf("Super Poder: %.2Lf\n\n", superpoder2);

	printf("Pronto, agora vamos comparar as cartas !\n\n");
    printf("__________________________\n\n");
    printf("Quando o resultado for '1', significa que a carta 1 venceu. Porém se for '0' significa que a carta 2 venceu\n\n");

    // Aqui esta sendo aplicado 'if' e 'else' para resultados de comparações de variaveis

    if (populacao1 > populacao2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (area1 > area2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (PIB1 > PIB2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (numerodepontosturisticos1 > numerodepontosturisticos2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (densidadepopulacional1 < densidadepopulacional2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (PIBpercapta1 > PIBpercapta2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    if (superpoder1 > superpoder2) {
        printf(" %s venceu !\n", nomedacidade1);
    } else {
        printf(" %s venceu !\n", nomedacidade2);
    }

    printf("FIM !\n\n");
    
return 0;

}
