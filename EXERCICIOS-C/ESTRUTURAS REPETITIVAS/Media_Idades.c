#include <stdio.h>
#include <string.h>

int main() {  

int  idades, quantidade;
double media, soma;

quantidade = 0;
soma = 0;

printf("Digite as idades:\n");
scanf("%d", &idades);

quantidade = quantidade + 1;
soma = soma + idades;

if (idades < 0){
    printf("IMPOSSIVEL CALCULAR");
}
else{
    while(idades > 0){
        scanf("%d", &idades);
        if(idades >= 0){
            quantidade = quantidade + 1.00;
            soma = soma + idades;
        }       
    }
    media= soma / quantidade;
    printf("MEDIA = %.2lf", media);
}

    return 0;
}
