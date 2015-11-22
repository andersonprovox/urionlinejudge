#include <stdio.h>
 
int main() {
 
   int x, i, res=0;
	// ler um valor x
	scanf("%d", &x);
	//Testar vários casospara apresentar somente 6
	for(i=0;i<12;i++){
		if(x%2!=0){// verifica se o resto é diferente de zero
			res=x;
			printf("%d\n", res);
		}
		x++; //incremento do x
	}

 
    return 0;
}1