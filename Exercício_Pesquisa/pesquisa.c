#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int pesqSeq(int key, int v[], int n) {
    int i, cont = 1;

    for (i = 0; i < n; i++) {
        cont++;
        if (v[i] == key) return cont;
        cont++;
    }
    return cont;
}

int pesqSeqSent(int chave, int v[], int n) {
    int i = 0, cont = 1;
    v[n] = chave;  // A última posição do vetor possui o sentinela

    cont++;
    while (v[i] != chave) {
        cont++;
        i++;
    }
    cont++;
    if (i < n) return cont;
    return cont;  //Índice inválido
}

int pesqBin(int chave, int v[], int n) {
    int inicio = 0, meio, fim = n - 1;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (chave < v[meio]) {
            fim = meio - 1;
        } else if (chave > v[meio]) {
            inicio = meio + 1;
        } else {
            return meio;
        }
    }
    return -1;  //Índice impossível
}

int *geraVetor(int n) {
    int *v = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        *(v + i) = (rand() % n) * 1000;
    }

    return v;
}

int main(int argc, char const *argv[]) {
    int n = 5;
    int *v = geraVetor(n);

    int melhor = v[0];
    int pior = v[n * 1000 + 1];
    int medio = v[rand() % n];

    printf("Pesquisa Sequencial:\n\n");
    printf("Melhor Caso: %d\n", pesqSeq(melhor, v, n));
    printf("Pior Caso: %d\n", pesqSeq(pior, v, n));
    printf("Caso Médio: %d\n\n", pesqSeq(medio, v, n));

    printf("Pesquisa Sequencial com Sentinela:\n\n");
    printf("Melhor Caso: %d\n", pesqSeqSent(melhor, v, n));
    printf("Pior Caso: %d\n", pesqSeqSent(pior, v, n));
    printf("Caso Médio: %d\n\n", pesqSeqSent(medio, v, n));

    printf("Pesquisa Binária:\n\n");
    printf("Melhor Caso: %d\n", pesqBin(v[(n - 1) / 2], v, n));
    printf("Pior Caso: %d\n", pesqBin(pior, v, n));
    printf("Caso Médio: %d\n\n", pesqBin(medio, v, n));

    return 0;
}