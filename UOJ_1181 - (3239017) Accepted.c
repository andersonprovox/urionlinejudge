#include <stdio.h>
 
int main() {
 
   float M[12][12], result;
    int i,j,linha;
    char oper;
    //aqui sera solicitado que leia o valor da linha
    scanf("%d ", &linha);
    //aqui é solicitado o tipo de operação que qeremos efetuar S para soma M para a media
    scanf("%c", &oper);
    /*aqui vou reservar o valor na matriz e utilizo um for para
    que reserve o valor nas colunas deixei o valor fixo da linha*/
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);

        }
    }
    /*deixei o if selecionar entre os dois casos possiveis*/

        //neste ponto efetua a soma das linhas imprime o resultado e termina
        if(oper == 'S'){
            for(j=0;j<12;j++){
                result += M[linha][j];
            }
            printf("%.1f\n", result);
        }
        //neste ponto efetua a media imprime e termina.
        else if(oper == 'M'){
            for(j=0;j<12;j++){
                result += M[linha][j];
            }
            result /= 12;
            printf("%.1f\n", result);
        }
 
    return 0;
}1