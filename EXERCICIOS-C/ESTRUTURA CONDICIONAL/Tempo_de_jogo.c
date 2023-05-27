#include <stdio.h>
#include <string.h>


int main() { 

int inicial, final, durou;

printf("Hora inicial: ");
scanf("%d", &inicial);
printf("Hora final: ");
scanf("%d", &final);

if(inicial >= final){
    durou = 24 - inicial + final;
    printf("O JOGO DUROU %d HORA(S)", durou);
}
if(inicial < final){
    durou = final - inicial;
    printf("O JOGO DUROU %d HORA(S)", durou);
}
 return 0;
}
