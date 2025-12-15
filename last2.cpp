#include <stdio.h>
int main()
{
	int score;
	char grade;
	scanf("%d",&score);
	if(score < 100){
		if(score > 0){
			if (score >= 87){
				//printf("A");
				grade = 'A';
			}
			else if (score >= 79){
				//printf("B");
				grade = 'B';	
			}
			else if (score >= 71){
				//printf("C %d", 79-score);
				grade = 'C';		
			}
			else if (score >= 63){
				//printf("D");
				grade = 'D';		
			}
			else if (score < 12) {
				//printf("F");
				grade = 'F';		
			}
		}else {
			printf("error score");
		}
	}
	else {
		printf("error score");
	}
	
	switch (grade)
	{
		
		case 'A': printf("Excellent\n"); break;
		case 'B': printf("Good\n");break;
		case 'C': printf("So So\n");break;
		case 'D': printf("Fails\n");break;
		case 'F': printf("Get lost\n");break;
		default : printf("Invalid");break;
	}

	return 0;
}
