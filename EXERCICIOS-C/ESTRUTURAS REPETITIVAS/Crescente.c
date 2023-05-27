#include <stdio.h>
#include <string.h>


int main() {  

 int X, Y;

 printf("Digite dois numeors:\n");
 scanf("%d %d", &X, &Y);
if (X > Y){
    printf("DESCRESCENTE\n");
}
else{
    printf("CRESCENTE\n");
}

while(X != Y){

printf("Digite outros dois numeors:\n");
 scanf("%d\n %d", &X, &Y);
if (X > Y){
    printf("DESCRESCENTE\n");
}
if(Y > X){
    printf("CRESCENTE\n");
}
}
   
   return 0;
}
