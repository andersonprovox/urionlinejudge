#include <stdio.h>
 
int main() {
 
   int i;
	double a[100];
	/*O problema necessita que leia 100 valores inteiros, reais, positivos e negativos por isso
	começo usando o double, o for abaixo vai ler esses 100 valores*/
	for (i=0;i<100;i++){
		scanf("%lf", &a[i]);
	}
	/* aqui farei a leitura de todos os valores no vetor e verificarei se 
	o valor que consta naquela posição verificada é menor ou igual a 10 sendo verificado dentro de uma
	condição if e impresso caso atenda a condição determinada*/
	for(i=0;i<100;i++){
		if(a[i]<=10){
			printf("A[%d] = %.1lf\n", i, a[i]);
		}
	}
 
    return 0;
}1