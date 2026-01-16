#include <stdio.h>
int main() {
	int score,hm,r;
	scanf("%d",&hm);
	for (r = 1; r<= hm; r++){
		scanf("%d",&score);
		if (score>=85)
			printf("%d(A)",score);
		else if (score>=75)
		    	printf("%d(B)",score);
			else if (score>=68)
					printf("%d(C)",score);
				else if (score>=55)
						printf("%d(D)",score);
					else printf("%d(F)",score);
		printf("\n");}
}

