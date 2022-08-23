#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int k, tam, *v, num;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *)malloc(sizeof(int) * tam);

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &num);
        v[i] = num;
    }

    printf("Qual o valor k desejado para encontrar no vetor? ");
    scanf("%d", &k);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (v[i] != v[j] && v[i] + v[j] == k) {
                printf("%d + %d = %d!\n", v[i], v[j], k);
                return 0;
            }
        }
    }

    printf("Nenhuma soma igual a %d foi encontrada no vetor! :(\n", k);

    return 0;
}
