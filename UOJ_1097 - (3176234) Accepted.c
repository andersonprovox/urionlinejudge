#include <stdio.h>
 
int main() {
 
   	int i, j=7;
	
	while(j<=7 && j>=5){
		i=1;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=5;
	while(j<=9 && j>=7){
		i=3;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=5;
	while(j<=11 && j>=9){
		i=5;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=5;
	while(j<=13 && j>=11){
		i=7;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=5;
	while(j<=15 && j>=13){
		i=9;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}

 
    return 0;
}1