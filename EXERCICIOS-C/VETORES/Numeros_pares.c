#include <stdio.h>
#include <string.h>

int main(){

int n, i, quantidade;
quantidade = 0;
    printf("Quantos numeros voce vai digitar?:");
    scanf("%d", &n);

    int vet[n];
  
    for (int i = 0; i<n; i++) {
      printf("Digite um numero: ");
      scanf("%d", &vet[i]);   
      if (vet[i] % 2 == 0){
        quantidade++;
      }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                 
    }
    printf("NUMEROS PARES:\n");
    for(i = 0; i < n; i++){
    if (vet[i] % 2 == 0){
    printf("%d  ", vet[i]);
    }
    }
    printf("\nQUANTIDADE DE PARES = %d", quantidade);
   
    return 0;
}
