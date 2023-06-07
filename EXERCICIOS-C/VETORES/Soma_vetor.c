#include <stdio.h>

int main(){

    int n, i;
    double soma, media;
 

    printf("Quantos numeros voce vai digitar?:");
    scanf("%d", &n);

    double vet[n];
    for (int i = 0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }
    
    printf("\nVALORES = ");

    for(i = 0; i < n; i++){
        printf("%.1lf  ", vet[i]);
        }
        printf("\nSOMA = %.2lf\n", soma);
        media = soma / n;
        printf("MEDIA = %.2lf", media); 
    
    return 0;
}
