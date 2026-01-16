#include <stdio.h>
int main() {
	int score,r;
	score=0;
	while (score!=-1){
		scanf("%d",&score);
		if (score>=85){
			printf("%d(A)",score);
			printf("\n");}
		else if (score>=75){
		    	printf("%d(B)",score);
		    	printf("\n");}
			else if (score>=68){
					printf("%d(C)",score);
					printf("\n");}
				else if (score>=55){
						printf("%d(D)",score);
						printf("\n");}
					else if (score>=0){
						printf("%d(F)",score);
						printf("\n");}
						else
	printf("\n");}
	
}

