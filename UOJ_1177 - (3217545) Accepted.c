#include <stdio.h>
 
int main() {
 
   int i, a[1000], n, t=0;

	scanf("%d", &n);
	/*o problema especifica que leia um valor inteiro e que reserve num vetor de 1000 posições
	sempre na sequencia de 0 até aquele valor inteiro fornecido e sequencie isto até preencher
	todo o vetor*/
	
	/*aqui foi colocado um for para percorrer e reservar os valores no vetor*/
	for(i=0;i<1000;i++){
		a[i] = t;
		t+=1;
		/*Aqui foi colocado uma condição para quando o t for igual ao numero reservado ele zera o 
		t assim só reservará os valor até o valor da variável que servirá como limite de valor
		inserido na sequencia*/
		if(t==n){
			t=0;
		}
	}
	for(i=0;i<1000;i++){
		printf("N[%d] = %d\n", i, a[i]);
	}
 
    return 0;
}1