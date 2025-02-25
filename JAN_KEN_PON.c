# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main () {

    int escolhadojogador, escolhadocomputador;
    srand (time(0));

    printf(" Vamos jogar JAn KEN PON !\n\n");
    printf("Wscolha uma opção: \n");
    printf("1. Para PEDRA\n");
    printf("2. Para PAPEL\n");
    printf("3. Para TESOURA\n");
    scanf("%d", &escolhadojogador);

    escolhadocomputador = rand () % 3 + 1;

    switch (escolhadojogador) {
        case 1:
        printf("Jogador: Pedra - ");
        break;
        case 2:
        printf("Jogador: Papel - ");
        break;
        case 3:
        printf("Jogador: Tesoura - ");
        break;
        default:
        printf("Opção inválida !\n");
        break;
    }

    switch (escolhadocomputador) {
        case 1:
        printf("Computador: Pedra\n");
        break;
        case 2:
        printf("Computador: Papel\n");
        break;
        case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhadojogador == escolhadocomputador) {
        printf("Empate !\n");
    } else if ((escolhadojogador == 1) && (escolhadocomputador == 3) ||
    (escolhadojogador == 2) && (escolhadocomputador == 1) ||
    (escolhadojogador == 3) && (escolhadocomputador == 2)) {
        printf("Jogador venceu !\n\n");
    } else {
        printf("Computador venceu !\n\n");
    }

    return 0;

}