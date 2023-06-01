#include <stdio.h>

int main(){

    int x, n, resto;

    printf("Quantos numeros voce vai digitar?:");
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        resto = x % 2;

        if (x < 0 && resto != 0) {
          printf("IMPAR NEGATIVO\n");
    }
     if (x > 0 && resto != 0) {
          printf("IMPAR POSITIVO\n");
    }
     if (x < 0 && resto == 0) {
          printf("PAR NEGATIVO\n");
    }
    if (x > 0 && resto == 0) {
          printf("PAR POSITIVO\n");
    }
     if (x == 0) {
          printf("NULO\n");
    }

    }

   
    return 0;
}
