//est.c: Estatística//
//Autor: Fernanda Cristina Gonçalves//


#include <stdio.h>
#include <math.h>

#define LIM 25


int main() {
    
    float max, min, media, desvio, soma = 0.0, notas[LIM];
    int i, N;
    printf("Primeiro entre com a quantidade de números e em seguida com os números : ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / N;
    printf("\n--> Media: %.2f\n", media);

    soma = 0.0;
    for (i = 0; i < N; i++)
        soma += (notas[i] - media) * (notas[i] - media);
    desvio = (soma / N);
    printf("--> Desvio: %.2f\n", desvio);

    max = notas[0];
    min = notas[0];
    for (int i = 0; i < N; i++) {
        if (notas[i] < min)
        {
            min = notas[i];
        }
        if (notas[i] > max) {
            max = notas[i];
        }
    }
    printf("--> Min: %.2f\n", min);
    printf("--> Max: %.2f\n", max);

    return 0;
}