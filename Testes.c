# include <stdio.h>

int main () {

    int i = 1, numero;

    printf("Qual tabuada você quer saber ?\n");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, i, numero*i);
        i++;
    } while (i <= 10);

    return 0;

}