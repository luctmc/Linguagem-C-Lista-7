/*Enunciado:Q5
SOMAR 6 VALORES E MÉDIA – Crie uma aplicação que deverá ler 6 valores, esta aplicação ao final
deverá apresentar a soma dos valores lidos e a média.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valores[6];
    int soma = 0;
    float media;

    printf("Informe 6 valores:\n");

    // Leitura dos valores informados pelo usuário
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; // Adiciona o valor lido à soma
    }

    // Calcula a média dos valores
    media = (float)soma / 6;

    printf("A soma dos valores é: %d\n", soma);
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}


