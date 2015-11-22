#include <stdio.h>
 
int main() {
 
   int n, resp, i;
	
	scanf("%d", &n);
	
	for(i=1;i<11;i++){
		resp = i * n;
		printf("%d x %d = %d\n", i, n, resp);
	}
 
    return 0;
}1