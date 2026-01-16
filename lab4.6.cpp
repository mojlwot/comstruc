#include <stdio.h>
int main() {
	int a,roll,time,r;
	scanf("%s %d %d",&a,&time,&roll);
	r=1;
	while (r<=roll){
	for (int t = 1; t<= time; t++)
	printf("%s",a);
	printf("\n");
	r++;}
	return 0;
}
