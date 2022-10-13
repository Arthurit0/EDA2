#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n, *v, luva, qtd_pares = 0, *pares;

    printf("Digite a quantidade de luvas: ");
    scanf("%d", &n);

    v = (int *)malloc(n * sizeof(int));
    printf("\nDigite o tamanho de cada luva:\n\n");

    for (int i = 0; i < n; i++) {
        printf("Luva n%d: ", i + 1);
        scanf("%d", &luva);
        v[i] = luva;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) continue;

        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                qtd_pares++;
                v[i] = v[j] = 0;
                break;
            }
        }
    }

    if (!qtd_pares)
        printf("\nNão há nenhum par!\n\n");
    else
        printf("\nO total é %d par(es)!\n\n", qtd_pares);

    free(v);
    return 0;
}
