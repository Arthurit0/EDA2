#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int tam, num, j;
    list *v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (list *)malloc(sizeof(list));

    for (int i = 0; i < tam; i++) {
        printf("Digite um valor para a posição %d do vetor: ", i);
        scanf("%d", &num);
        }

    return 0;
}