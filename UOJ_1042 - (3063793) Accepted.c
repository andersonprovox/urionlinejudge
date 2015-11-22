#include <stdio.h>
 
int main() {
 
   	int i, t, j;
	int matb[3], mata[3];
	
	for(i=0;i<3;i++){
		scanf("%d",&mata[i]);
		matb[i] = mata[i];
	}
	
	
	for (i=0;i<3-1;i++){
		for(j=0;j<(3-1)-i;j++){
			if(matb[j]>matb[j+1]){
			t=matb[j];
			matb[j] = matb[j+1];
			matb[j+1] = t;
		 	}
		
		}
	}
	
	for (i=0;i<3;i++){
		printf("%d\n", matb[i]);
	}
	printf("\n");
	for (i=0;i<3;i++){
		printf("%d\n", mata[i]);
	}

 
    return 0;
}1