#include <stdio.h>
#include <string.h>


int main() { 

    double troco, recebido, produto;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &produto);
    printf("Quantidade Comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

troco = recebido - (quantidade * produto);

printf("TROCO = %.2lf", troco);

    return 0;
}
