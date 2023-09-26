/*Enunciado:Q1
FIBONACCI – Crie uma que apresente a série Fibonacci até o décimo quinto termo. A série Fibonacci é
formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Esta série se caracteriza pela soma de um
termo posterior com o seu anterior subsequente.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int n = 15;  // Número de termos desejados na série Fibonacci
    int termo1 = 1, termo2 = 1, proximo;

    printf("Série Fibonacci até o décimo quinto termo:\n");

    // Imprimir os dois primeiros termos (1, 1)
    printf("%d, %d, ", termo1, termo2);

    // Gerar os próximos termos da série
    for (int i = 3; i <= n; i++) {
        proximo = termo1 + termo2;
        printf("%d, ", proximo);

        // Atualizar os valores de termo1 e termo2
        termo1 = termo2;
        termo2 = proximo;
    }

    printf("\n");

    return 0;
}
