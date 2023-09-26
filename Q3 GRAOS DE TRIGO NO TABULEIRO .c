/*Enunciado:Q3
GRAOS DE TRIGO NO TABULEIRO – Elabore um programa que efetue o cálculo e no final apresente o
somatório do número de grãos de tricô que se pode obter num tabuleiro de xadrez (8x8), o programa
deverá obedecer a seguinte regra: colocar um grão de trigo no primeiro quadrado e nos quadrados
seguintes o dobro do quadrado anterior. Ou seja, no primeiro quadro coloca-se 1 grão, no segundo
quadro colocam-se 2 grãos (neste momento têm-se 3 grãos), no terceiro quadro colocam-se 4 grãos
(agora tem-se 7), no quarto quadro colocam-se 8 grãos (agora tem-se 15) até atingir o sexagésimo
quarto quadro (exercício baseado no capítulo 16 do livro “O homem que calculava” de Malba Tahan).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int tamanhoTabuleiro = 8; // Tamanho do tabuleiro (8x8)
    long long int totalGrãos = 1; // Começamos com 1 grão no primeiro quadrado
    long long int grãosNoQuadrado = 1; // Grãos no quadrado atual

    printf("Tabuleiro de xadrez (8x8) - Quantidade de grãos de trigo em cada quadrado:\n");
    printf("Quadrado\tGrãos no Quadrado\tTotal de Grãos\n");

    for (int quadrado = 1; quadrado <= tamanhoTabuleiro * tamanhoTabuleiro; quadrado++) {
        printf("%d\t\t%lld\t\t%lld\n", quadrado, grãosNoQuadrado, totalGrãos);
        
        // Dobrar a quantidade de grãos para o próximo quadrado
        grãosNoQuadrado *= 2;
        totalGrãos += grãosNoQuadrado;
    }

    printf("Total de grãos no tabuleiro: %lld\n", totalGrãos);

    return 0;
}
