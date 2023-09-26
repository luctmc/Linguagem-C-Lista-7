/*Enunciado:Q7
SOMAR FATORIAIS ÍMPARES DE 1 A 20 – Crie um programa que realize a soma de todos os fatoriais
dos valores ímpares entre 1 e 20, no final o programa deverá apresentar a soma e número de valores
ímpares.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long int calcularFatorial(int num) {
    unsigned long long int fatorial = 1;
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    unsigned long long int somaFatoriais = 0;
    int numValoresImpares = 0;

    printf("Calculando a soma dos fatoriais dos valores ímpares de 1 a 20:\n");

    for (int i = 1; i <= 20; i += 2) {
        unsigned long long int fatorial = calcularFatorial(i);
        somaFatoriais += fatorial;
        numValoresImpares++;
    }

    printf("A soma dos fatoriais dos valores ímpares é: %llu\n", somaFatoriais);
    printf("O número de valores ímpares é: %d\n", numValoresImpares);

    return 0;
}
