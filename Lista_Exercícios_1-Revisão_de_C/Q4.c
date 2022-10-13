#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int tam, num, j, *v, excl_new, incl, excl;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(sizeof(int));

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &num);
        v[i] = num;
    }

    incl = v[0];

    for (int i = 1; i < tam; i++) {
        excl_new = (incl > excl) ? incl : excl;

        incl = excl + v[i];
        excl = excl_new;
    }

    printf("Maior Soma: %d", incl > excl ? incl : excl);

    return 0;
}
