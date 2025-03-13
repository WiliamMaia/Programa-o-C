#include <stdio.h>

void movetorre(int casas){  // Aqui declaro a função para movimento da Torre
    for (casas > 0; casas - 1;);
}
    movebispo(int casas){  // Aqui declaro a função para movimento do Bispo
        while (casas > 0)
        casas -- ;
    }
    moverainha(int casas){  // Aqui declaro a função para movimento da Rainha
        do (casas - 1);
        while (casas > 0);
    }

int main() {

    int torre, bispo, rainha; // Aqui estou declarando as peças
    int escolhapeca, escolhadirecao; // Aqui declaro as funções para switch
    int movimento; // Aqui declaro a variável para receber o número de movimentos

    printf("Vamos movimentar as peças de Xadrez ! \n");
    printf("Primeiro escolha qual peça irá se movimentar: \n 1. Torre \n 2. Bispo \n 3. Rainha \n"); // Aqui solicito a escolha da peça
    scanf("%d", &escolhapeca);  // Aqui recebe a peça

    switch (escolhapeca){ // switch para escolha de peça
        case 1: // Escolha da Torre
        printf("Agora escolha qual direção irá se movimentar \n 1. Direita \n 2. Esquerda \n 3. Cima \n 4. Baixo \n");  // Aqui apresento as direções
        scanf("%d", escolhadirecao);  // Aqui recebe a direção
    
        switch (escolhadirecao){  // switch para escolha da direção
            case 1: // Escolha Direita
                printf("Informe quantas casas irá se movimentar: \n");
                scanf("%d", &movimento);
                for (movimento > 0; movimento ++;)
                printf("A Torre se moveu para %d ! \n", escolhadirecao);

            break;  // Fim Direita
            case 2: // Escolha Esquerda
            break;  // Fim Esquerda
            case 3: // Escolha Cima
            break;  // Fim Cima
            case 4: // Escolha Baixo
            break;  // Fim Baixo
            default:
            printf("Escolha Inválida !\n");
            break; // Fim escolha de direção
        }
        break;  // Fim Torre
        case 2: // Escolha Bispo
        break;  // Fim Bispo
        case 3: // Escolha Rainha
        break;  // Fim Rainha
        default:
        printf("Escolha Inválida !\n");
        break; // Fim escolha de peça
    }

    return 0;
}