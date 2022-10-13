#include <stdio.h>
#include <stdlib.h>

int sumArr(int *v, int size) {
    int cont = 0;
    while (cont < size) {
        cont++;
    }

    return cont;
}

int main(int argc, char const *argv[]) {
    int n, menorNum, *v, size, soma = 0, bigBreak = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    size = n;
    menorNum = (n / 2);

    v = (int *)malloc(sizeof(int) * size);

    while (size >= menorNum) {
        for (int k = 0; k < size; k++) {
            v[k] = 1;
        }
        for (int i = 0; i <= size; i++) {
            for (int k = 0; k < size; k++) {
                v[k] = 1;
            }

            for (int j = 0; j <= size; j++) {
                // Soma valores
                for (int k = 0; k < size; k++) {
                    soma += *(v + k);
                }

                if (soma == n) {
                    // Printa valores:
                    for (int k = 0; k < size; k++) {
                        printf("%d, ", *(v + k));
                    }
                    printf("\n");

                    if (size == n) {
                        bigBreak = 1;
                        break;
                    }
                }
                soma = 0;
                if (i + j < size) {
                    *(v + i + j) += 1;
                } else {
                    break;
                }
            }
            if (bigBreak) {
                bigBreak = 0;
                soma = 0;
                break;
            }
        }
        size--;
        free(v);
        v = (int *)malloc(sizeof(int) * size);
    }
}
