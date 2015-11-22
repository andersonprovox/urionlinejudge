#include <stdio.h>
 
int main() {
 
    /*caso nenhuma das opções sejam escolhidas estamos inicializando
	as variaveis com zeros para mostrar caso não haja adição*/
	int cod, alcool=0, gasosa=0, diesel=0, fim;
	
	//sera lido o codigo do combustivel e enquanto nao for igual a 4 o laço continuara ativo
	
	while(cod!=4){
		scanf("%d", &cod);
		/*para cada if sera verificado e o numero informado na variavel cod e igual se for sera somado*/
		if(cod == 1){
			alcool +=1; 
		}
		else if(cod ==2){
			gasosa +=1; 
		}
		else if(cod ==3){
			diesel +=1;
		}
	}
	/* quando digitado 4 todos os itens abaixo serão impressos na tela*/
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasosa);
	printf("Diesel: %d\n", diesel);
 
    return 0;
}1