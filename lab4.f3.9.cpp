#include <stdio.h>
int main() {
	int score,r,a,b,c,d,f;
	score=0; a=0; b=0; c=0; d=0; f=0;
	while (score!=-1){
		scanf("%d",&score);
		if (score>=85){
			a=a+1;
			printf("%d(A)",score);
			printf("\n");}
		else if (score>=75){
				b=b+1;
		    	printf("%d(B)",score);
		    	printf("\n");}
			else if (score>=68){
					c=c+1;
					printf("%d(C)",score);
					printf("\n");}
				else if (score>=55){
						d=d+1;
						printf("%d(D)",score);
						printf("\n");}
					else if (score>=0){
						f=f+1;
						printf("%d(F)",score);
						printf("\n");}
						else
	printf("\n");}
	printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",a,b,c,d,f);
	
}

