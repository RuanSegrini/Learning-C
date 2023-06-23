#include <stdio.h>

int main(){
    int n, masculino, quantidade;
    double maior, menor, media, soma;

    soma = 0;
    masculino = 0;
    quantidade = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double alturas[n];
    char generos[n];

    for (int i=0; i<n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
        
         if(generos[i] == 'M'){
            masculino++;
         }
         if(generos[i] == 'F'){
            soma = soma + alturas[i];
            quantidade++;
         }
    }


     maior = alturas[0];
    
    for (int i=1; i<n; i++) {
        if (alturas[i] > maior) {
            maior = alturas[i];
        }
    }

     menor = alturas[0];

      for (int i=1; i<n; i++) {
        if (alturas[i] < menor) {
            menor = alturas[i];
        }
    }

    media = soma / quantidade;


printf("Menor altura = %.2lf\n", menor);
printf("Maior altura = %.2lf\n", maior);
printf("Media das alturas das mulheres = %.2lf\n", media);
printf("Numero de homens = %d", masculino);
   

    return 0;
}
