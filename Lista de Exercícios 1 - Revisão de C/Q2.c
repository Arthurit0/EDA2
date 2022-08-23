#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int *v, *res, tam, num;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(sizeof(int) * tam);
    res = (int *)malloc(sizeof(v));

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &num);
        v[i] = num;
    }

    for (int i = 0; i < tam; i++) {
        res[i] = 1;
        for (int j = 0; j < tam; j++) {
            if (i != j) {
                res[i] *= v[j];
            }
        }
    }

    printf("[ ");

    for (int i = 0; i < tam; i++) {
        if (i != tam - 1) {
            printf("%d, ", res[i]);
        } else {
            printf("%d ]\n", res[i]);
        }
    }

    return 0;
}
