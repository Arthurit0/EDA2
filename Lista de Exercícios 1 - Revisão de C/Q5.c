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
    int n, menorNum, *v, size;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    size = n;
    menorNum = n / 2;

    v = (int *)malloc(sizeof(int) * n);

    printf("[ ");
    for (int i = 0; i < size; i++) {
        *(v + i) = 1;

        i + 1 == size ? printf("1 ]") : printf("1, ");
    }

    (int *)realloc(v, sizeof(int) * --size);

    for (int i = 0; i < size; i++) {
        v[i] = v[i]++;
    }
}
