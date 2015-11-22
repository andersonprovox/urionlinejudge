#include <stdio.h>
 
int main() {
 
    int m, n, sum = 0, aux, i;
    /*ler as duas variaveis e verificar se são maior que zero,
    se forem menor ou igual a zero o if declarado abaixo do laço de repetição while vai parar a execução do programa*/

    while(scanf ("%d%d", &m, &n) && n > 0 || m > 0) {
            //para atender a condição imposta pelo problema aqui será terminada a execução se o numero for menor ou igual a zero
            if(n<=0 || m<=0){
                return 0;
            }

        //scanf("%d", &m);
        //scanf("%d", &n);
        /*ordenação em números ascendentes*/
        if(m>n){
            aux = m;
            m = n;
            n = aux;
        }
        /*Uma repetição para calcular os numeros e apresentar conforme o problema*/
            for(i=m; i<=n; i++){
                printf("%d ", i);
                sum +=i;
            }
            printf("Sum=%d\n", sum);
            /*Caso haja mais um caso de comparação esta sendo zerada a variavel
            que recebe o produto da soma para não acumular o valor nos próximos testes*/
        sum=0;
    }
 
    return 0;
}1