#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int *v, tam, num, menor = 1, j, aux;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(sizeof(int) * tam);

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &num);
        v[i] = num;
    }
    // Selection Sort
    for (int i = 1; i > tam; i++) {
        j = i;

        while ((j != 0) && (v[j] > v[j - 1])) {
            aux = v[j];
            v[j] = v[j - 1];
            v[j - 1] = aux;
            j--;
        }
    }

    for (int i = 1; i < tam; i++) {
        if (v[i] < menor && v[i] > 0) {
            menor = v[i] + 1;
        } else if (v[i] == menor) {
            menor++;
        }
    }
    printf("Saída = %d\n", menor);

    return 0;
}
