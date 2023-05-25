#include <stdio.h>
#include <string.h>


int main() { 

int horas, minutos, segundos, duracao;

printf("Digite a duracao em segundos: ");
scanf("%d", &duracao);

segundos = duracao % 60;
minutos = (duracao / 60) % 60;
horas = (duracao / 60) / 60  ;


printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
