#include <stdio.h>
 
int main() {
 
    	double n1, n2, n3, n4, media, rec;
	
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	scanf("%lf", &n4);
	
	media = (n1*2+n2*3+n3*4+n4)/10;
	printf("Media: %.1lf\n", media);
	
	if(media > 7)
		printf("Aluno aprovado.\n");
	else if(media < 5)
		printf("Aluno reprovado.\n");
	else {
		printf("Aluno em exame.\n");
		scanf("%lf", &rec);
		printf("Nota do exame: %.1lf\n", rec);
		media = (media+rec)/2;
		if(media > 5)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		printf( "Media final: %.1lf\n", media);
	}
    return 0;
}1