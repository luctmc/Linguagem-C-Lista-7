/*Enunciado:Q6
SOMAR VALORES POSITIVOS ATÉ APARECER NEGATIVO – Crie um programa que deverá realizar a
leitura sucessiva de valores numéricos, no final o programa deverá apresentar a soma dos valores, o
número de valores somados e a média. O programa deverá realizar leituras sucessivas de valores
enquanto o usuário estiver fornecendo valores positivos, ou seja, o programa deve parar quando o
usuário fornecer um valor negativo (menor que zero).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int numValores = 0;

    printf("Informe valores positivos (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%d", &valor);

        if (valor < 0) {
            // O usuário forneceu um valor negativo, encerramos o loop
            break;
        }

        soma += valor; // Adiciona o valor à soma
        numValores++;  // Incrementa o contador de valores somados
    }

    if (numValores > 0) {
        // Calcula a média dos valores positivos
        float media = (float)soma / numValores;
        printf("A soma dos valores é: %d\n", soma);
        printf("O número de valores somados é: %d\n", numValores);
        printf("A média dos valores é: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}
