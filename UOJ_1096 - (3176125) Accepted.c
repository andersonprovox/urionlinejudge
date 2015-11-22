#include <stdio.h>
 
int main() {
 
    	int i, j=7;
	
	while(j<=7 && j>=5){
		i=1;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=3;
	while(j<=7 && j>=5){
		i=3;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=3;
	while(j<=7 && j>=5){
		i=5;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=3;
	while(j<=7 && j>=5){
		i=7;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}
	j+=3;
	while(j<=7 && j>=5){
		i=9;
		printf("I=%d J=%d\n", i,j);
		j-=1;
	}

 
    return 0;
}1