#include <stdio.h>
 
int main() {
 
   int num, rest, vezes,i, nulo;

    scanf("%d", &vezes);

    for(i=0;i<vezes;i++){

    scanf("%d", &num);

    rest = num%2;

    if(rest == 0 && num > 0){
        printf("EVEN POSITIVE\n");
    }
    else if(rest == 0 && num < 0){
        printf("EVEN NEGATIVE\n");
    }
    else if (rest !=0 && num > 0){
        printf("ODD POSITIVE\n");
    }
    else if (rest !=0 && num < 0){
        printf("ODD NEGATIVE\n");
    }
    else if (num == 0){
        printf("NULL\n");
    }
    }
    return 0;
}1