#include <stdio.h>
#include <string.h>

int main() { 

int quantidade;
double preco, recebido, troco, valor;

printf("Preco unitario do produto: ");
scanf("%lf", &preco);
printf("Quantidade comprada: ");
scanf("%d", &quantidade);
printf("Dinheiro recebido: ");
scanf("%lf", &recebido);

valor = (quantidade * preco);

if (valor < recebido){

troco = recebido - valor;
printf("TROCO = %.2lf", troco);

}
else{
    troco = valor - recebido;
    printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", troco);
}
     return 0;
}
