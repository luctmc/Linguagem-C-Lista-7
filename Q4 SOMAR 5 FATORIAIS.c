/*Enunciado:Q4
SOMAR 5 FATORIAIS – Crie um programa que efetua a leitura de 5 valores numéricos inteiros
informados pelo usuário, no final o programa deverá apresentar a soma dos fatoriais de cada um dos
valores informados pelo usuário.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

int main() {
    int valores[5];
    int somaFatoriais = 0;

    printf("Informe 5 valores inteiros:\n");

    // Leitura dos valores informados pelo usuário
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Calcular e somar os fatoriais
    for (int i = 0; i < 5; i++) {
        somaFatoriais += calcularFatorial(valores[i]);
    }

    printf("A soma dos fatoriais dos valores informados é: %d\n", somaFatoriais);

    return 0;
}
