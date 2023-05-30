#include <stdio.h>

int main(){

    int x, n, dentro, fora;

    printf("Quantos numeros voce vai digitar?:");
    scanf("%d", &n);

	dentro = 0;
    fora = 0;
    for (int i = 0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x > 20 || x < 10) {
          fora++;
    }
    else{
        dentro++;
    }
    }

    printf("%d DENTRO\n",dentro);
    printf("%d FORA",fora);
   
    return 0;
}
