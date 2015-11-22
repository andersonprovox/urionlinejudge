#include <stdio.h>
 
int main() {
 
   /*Algoritmo para trocar de posição os numeros de um vetor de 20 posições com numeros digitados pelo
	usuario, não é organizar em ascendente ou descendente os valores digitados e armazenados no vetor, mas
	sim trocar estes valores de posição de forma descendente*/
	//aqui é declarado dois vetores de 20 posições e uma variável i para servir de contador
	int n[20],n2[20],i;
	/*um for para reservar 20 valores em um vetor */
	for(i=0;i<20;i++){
		scanf("%d",&n[i]);	
	}
	/* no segundo for será efetuada a troca das posições do vetor que recebeu
	os valores digitados pelo usuário e reservando os valores trocados em um segundo vetor,
	para isso está lendo o indice do vetor original n[19-i] aqui estou buscando a ultima posição
	vai acontecer que o i vai ser incrementado no for e o numero na frente menos o indice do vetor
	vai pegar os numeros do ultimo até o primeiro enquanto no segundo vetor vai reservando em ordem
	ascendente */
	for(i=0;i<20;i++){
		n2[i] = n[19-i];
		/*aqui está apresentando os numeros do novo vetor com os valores trocados
		do ultimo para o primeiro em relação ao 1º vetor*/
		printf("N[%d] = %d\n", i, n2[i]);
	}
 
    return 0;
}1