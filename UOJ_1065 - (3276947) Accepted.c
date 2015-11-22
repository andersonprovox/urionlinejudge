#include <stdio.h>
 
int main() {
 
   int num;
    int par=0, i;

    for(i=0;i<5;i++){
            scanf("%d", &num);
            if (num%2==0){
                par +=1;
            }
    }
    printf("%d valores pares\n", par);
 
    return 0;
}1