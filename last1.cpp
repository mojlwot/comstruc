#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if(score < 100){
		if(score > 0){
			if (score >= 87){
				printf("A");
			}
			else if (score >= 79){
				printf("B");		
			}
			else if (score >= 71){
				printf("C %d", 79-score);		
			}
			else if (score >= 63){
				printf("D");		
			}
			else if (score < 12) printf("F");
		}else {
			printf("error score");
		}
	}
	else {
		printf("error score");
	}

	return 0;
}
