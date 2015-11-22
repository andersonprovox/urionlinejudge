#include <stdio.h>
 
int main() {
 
   	int i=1,j=60;
	
	while(j<=60 && j>=0){
		printf("I=%d J=%d\n", i, j);
		i+=3;
		j-=5;
	}

 
    return 0;
}1