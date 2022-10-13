#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int levenshtein(char *str1, int len1, char *str2, int len2);

int main(int argc, char const *argv[]) {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int m[MAX_SIZE][MAX_SIZE];

    printf("Digite a String 1: ");
    scanf("%[^\n]%*c", str1);
    printf("Digite a String 2: ");
    scanf("%[^\n]%*c", str2);

    printf("\nA quantidade de operações para alterar de uma string para a outra é %d\n\n", levenshtein(str1, strlen(str1), str2, strlen(str2)));

    return 0;
}

int levenshtein(char *str1, int len1, char *str2, int len2) {
    int a, b, c;

    if (!len1) return len2;
    if (!len2) return len1;

    if (str1[len1 - 1] == str2[len2 - 1])
        return levenshtein(str1, len1 - 1, str2, len2 - 1);

    a = levenshtein(str1, len1 - 1, str2, len2 - 1);
    b = levenshtein(str1, len1, str2, len2 - 1);
    c = levenshtein(str1, len1 - 1, str2, len2);

    if (a > b) a = b;
    if (a > c) a = c;

    return a + 1;
}