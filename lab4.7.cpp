#include <stdio.h>
int main() {
	int roll,time,r,t;
	char a;
	scanf("%c %d %d",&a,&time,&roll);
	//r=1;
	//while (r<=roll){
	for (r = 1; r<= roll; r++){
		for (t = 1; t<= time; t++)
			printf("%c",a);
	printf("\n");}
	//r++;}
	return 0;
}
