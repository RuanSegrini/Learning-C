#include <stdio.h>

int main(){
    
int n, i;

printf("Quantos elementos vai ter cada vetor? ");
scanf("%d", &n);


int vetA[n], vetB[n], vetRESULTANTE[n];
printf("Digite os valores de A: \n");
for(int i = 0; i < n; i++){
    
    scanf("%d", &vetA[i]);
}
 printf("Digite os valores de B: \n");
for(i = 0; i < n; i++){
    
    scanf("%d", &vetB[i]);
}

printf("\nVETOR RESULTANTE: \n");

for(i = 0; i < n; i++){
    vetRESULTANTE[i] = vetA[i] + vetB[i];
    printf("%d\n", vetRESULTANTE[i]);

}
   

    return 0;
}
