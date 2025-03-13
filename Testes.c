# include <stdio.h>

void movetorre(int casas) {
    if (casas > 0) {
        printf("Direita \n");
        casas - 1;
    }
}

int main () {

 movetorre (5);

    return 0;

}