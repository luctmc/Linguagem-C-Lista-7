/*Enunciado:Q2
CONVERSÃO GRAUS – Crie um programa que apresente os valores de conversão de graus Celsius em
Fahrenheit, de 10 em 10 graus, iniciando a contagem em 10 graus Celsius e finalizando em 100 graus
Celsius. O programa deverá apresentar os valores das duas temperaturas.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int celsius;

    printf("Conversão de graus Celsius para Fahrenheit:\n");
    printf("Celsius\t\tFahrenheit\n");

    for (celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
