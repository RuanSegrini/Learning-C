#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

char* strcpy(char* destination, const char* source);

int main(){
    
int n, maior;

printf("Quantos elementos vai ter cada vetor?");
scanf("%d", &n);

    char nomes[n][50],  nomemaior[50];
    int idades[n];
   
    for (int i = 0; i<n; i++) {
       printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maior = idades[0];
    
    for (int i=1; i<n; i++) {
        if (idades[i] > maior) {
            maior = idades[i];
            strcpy(nomemaior, nomes[i]);
        }
    }

    printf("PESSOA MAIS VELHA: %s", nomemaior);
       
        return 0;
}
