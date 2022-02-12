#include <stdio.h>
#include <stdlib.h>

void ler_dados(float *vet, int num)  {
    int i;  
    for(i=0;i<num;i++)  {
        printf("Entre com o valor %d: ", i+1);  
        scanf("%f", &vet[i]);  
    }
}


float calcula_media(float *vet, int num)  {
    float soma = 0.0;  
    int i;  
    for(i=0;i<num;i++)  
    soma = soma + vet[i];  
    return soma/num; 
}



int main (void) {
    float *notas;  
    int alunos;  
    printf("Digite o total de alunos da turma: ");  
    scanf("%d", &alunos); 
    notas = (float *) malloc(alunos * sizeof(float));  
    ler_dados(notas, alunos);  
    printf("Media: %.2f\n.", calcula_media(notas, alunos));
    free(notas); 
    return 0; 
}