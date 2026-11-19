#include <stdio.h>

int main() {
    int v[5];
    int soma = 0;

    printf("5 inteiros: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    double media = soma / 5.0;

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", media);

    return 0;
}