#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");
   char r = 's';
   while (r == 's') {
   int n,i;
   printf("\n\n*****SEQU�NCIA DE FIBONACCI*****\n\n");
   printf("Digite a quantidade de termos  a serem exibidos: ");
   scanf("%d", &n);
   printf("\nA sequ�ncia de Fibonacci �: \n");
   for(i=0; i<n; i++)
       printf("%d ", fibonacci(i+1));
   getch();
   printf("\n\nVoc� deseja continuar ? [s/n]\n"); 
      scanf(" %c", &r); 
   }
    }
//fun��o fechada de fibonacci
int fibonacci(int n,int num){
	return ((1/sqrt(5)) * (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n)));
	} 
