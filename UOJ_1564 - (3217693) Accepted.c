#include <stdio.h>
 
int main() {
 
int a;
	/*Aqui vai lendo dentro do while o scanf dentro while com a condição do EOF
	o if vai fazer o controle na condição do if se for igual a zero mostra uma mensagem e caso for maior mostrará
	outra mensagem*/
	while (scanf("%d", &a) !=EOF){
		if (a ==0){
			printf("vai ter copa!\n");
		}
		else{
			printf("vai ter duas!\n");
		}
	}
 
    return 0;
}1