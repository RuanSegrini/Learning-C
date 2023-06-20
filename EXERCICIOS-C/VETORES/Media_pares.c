#include <stdio.h>

int main(){
    
int n, soma, quantidade;
double media;

quantidade = 0;
soma = 0;
printf("Quantos elementos vai ter cada vetor?");
scanf("%d", &n);


    int vet[n];
    for (int i = 0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0){
        soma = soma + vet[i];
        quantidade++;
      } 
    }
    if(soma != 0){
       media = soma / quantidade;
       printf("MEDIA DOS PARES = %.1lf", media);
    }
    else{
        printf("NENHUM NUMERO PAR");
    }
       
        return 0;
}
