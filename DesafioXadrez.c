#include <stdio.h>

void movetorre(int movimento){  // Aqui declaro a função para movimento da Torre
    if (movimento > 0){
        printf("Direita ! \n");
        movetorre(movimento - 1);
    }
}
void movebispo(int movimento){ // Aqui declaro a função para movimento do Bispo
    while (movimento > 0){
        printf("Direita e Cima \n");
        movimento --;
    }
}
void moverainha(int movimento){  // Aqui declaro a função para movimento da Rainha
    do { printf("Esquerda ! \n");
        movimento --;
    } while (movimento > 0);
}

int main() {

    int escolhapeca,movimento = 1; // Aqui declaro as variáveis

    printf("Vamos movimentar as peças de Xadrez ! \n");
    printf("Primeiro escolha qual peça irá se movimentar: \n 1. Torre \n 2. Bispo \n 3. Rainha \n 4. Cavalo \n"); // Aqui solicito a escolha da peça
    scanf("%d", &escolhapeca);  // Aqui recebe a peça

    switch (escolhapeca){ // switch para escolha de peça
        case 1: // Escolha da Torre
        movetorre(5);
         break;  // Fim Torre
        case 2: // Escolha Bispo
        movebispo(5);
        break;  // Fim Bispo
        case 3: // Escolha Rainha
        moverainha(8);
        break;  // Fim Rainha
        case 4: // Escolha Cavalo
        while (movimento --){
            for (int avanco_cavalo = 2;avanco_cavalo > 0; avanco_cavalo --){
                printf("Cima \n");
            }
                printf("Direita \n");
        }
        break;  // Fim Cavalo
        default:
        printf("Escolha Inválida !\n");
        break; // Fim escolha de peça
    }

    return 0;
}
