#include <stdio.h>
 
int main() {
 
    int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if ((a % b == 0) || (b % a == 0) ){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}
 
    return 0;
}1