#include <stdio.h>

void movetorre(int movimento){  // Aqui declaro a função para movimento da Torre
    for (movimento; movimento > 0; movimento --)
        printf("Direita \n");
}
void movebispo(int movimento){ //  Aqui declaro a função para movimento do Bispo
    
}

int main() {

    int escolhapeca; // Aqui declaro a variável

    printf("Vamos movimentar as peças de Xadrez ! \n");
    printf("Primeiro escolha qual peça irá se movimentar: \n 1. Torre \n 2. Bispo \n 3. Rainha \n 4. Cavalo \n"); // Aqui solicito a escolha da peça
    scanf("%d", &escolhapeca);  // Aqui recebe a peça

    switch (escolhapeca){ // switch para escolha de peça
        case 1: // Escolha da Torre
        movetorre(5);
        break;  // Fim Torre
        case 2: // Escolha Bispo

        break;  // Fim Bispo
        case 3: // Escolha Rainha

        break;  // Fim Rainha
        case 4: // Escolha Cavalo
        for (int avanco_cavalo = 2;avanco_cavalo > 0; avanco_cavalo --){
            printf("Cima \n");
        } for (int movimento = 1; movimento > 0; movimento --){
            printf("Direita \n");
        } break;  // Fim Cavalo
        default:
        printf("Escolha Inválida !\n");
        break; // Fim escolha de peça
    }

    return 0;
}
