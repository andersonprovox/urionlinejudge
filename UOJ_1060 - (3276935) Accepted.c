#include <stdio.h>
 
int main() {
 
   float num;
    int pos=0, i;

    for(i=0;i<6;i++){
            scanf("%f", &num);
            if (num>0){
                pos +=1;
            }
    }
    printf("%d valores positivos\n", pos);
 
    return 0;
}1