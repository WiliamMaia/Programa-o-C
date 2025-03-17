#include <stdio.h>

void movetorre(int movimento){  // Aqui declaro a função para movimento da Torre
    do {printf("Direita \n");
        movimento --;
    } while (movimento > 0);
}   // Conforme uma das expecificações, cada peça deve ter uma estrutura, para Torre foi 'do-while'
void moveBispo(int movimento) {   // Aqui declaro a função para movimento do Bispo
    for (int avanco = 0; avanco < movimento; avanco ++) { // Aqui declaro o avanço na vertical
        for (int virada = 0; virada < movimento; virada ++) { // Aqui declaro a virada da horixontal
            switch (virada) {
                case 1: printf("Diagonal Cima-Direita\n"); break;
            }
        }
    }
}   //  Conforme uma das expecificações, cada peça deve ter uma estrutura, para o Bispo foi 'for'
void moverainha(int movimento){  // Aqui declaro a função para movimento da Rainha
    while (movimento > 0){
    printf("Esquerda \n");
    movimento --; 
    }
}   //  Conforme uma das expecificações, cada peça deve ter uma estrutura, para a Rainha foi 'while'
void movecavalo(int movimento_completo){  // Aqui declaro que um 'movimento completo' se iniciará
    for (int avanco = 0; avanco <= 2 && movimento_completo > 0; avanco ++){  // Aqui declaro um 'avanço' do Cavalo até 2 casas enquanto o 'movimento completo' estiver em execução
        for (int virada = 0; virada <= 1 && movimento_completo > 0; virada ++){  //  Aqui declaro que a 'virada' do Cavalo é de apenas uma casa enquanto o 'movimento completo' estiver em execução
            if (avanco == 2 && virada == 1){  //  Aqui declaro que quando as condições alcançarem o desejado para um avanço longo e virada curta deve imprimir as direções tomadas
                printf(" Cima \n Cima \n Direita \n");  // Imprime as direções
                movimento_completo --;  //  Aqui termina o 'movimento completo'
            }
        }
    }
}   //  Conforme uma das expecificações, cada peça deve ter uma estrutura, para o Cavalo deve ter 2 loops aninhados e 1 deles obrigatoriamente 'for'

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
        moveBispo(5);
        break;  // Fim Bispo
        case 3: // Escolha Rainha
        moverainha(8);
        break;  // Fim Rainha
        case 4: // Escolha Cavalo
        movecavalo(1);
        break;  // Fim Cavalo
        default:
        printf("Escolha Inválida !\n");
        break; // Fim escolha de peça
    }

    return 0;
}
