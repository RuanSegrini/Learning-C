#include <stdio.h>

int main(){
    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double matriz[m][n];
    int negativos[n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
           
        }
    }
  
printf("Valores negativos: \n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                negativos[i] = matriz[i][j];
                printf("%d\n", negativos[i]);
            }
        }
    }

    return 0;
}
