#include <stdio.h>

int main () {
	float p1, p2, p3;
	float pr1, pr2, pr3;
	float v1, v2, v3;
	
	scanf("%f" ,&p1);
	pr1  = p1 - (p1*0.05) + (p1*0.07);
	v1 = pr1 + (pr1*0.07)
	printf("%.2f\n", v1);
	
	scanf("%f" ,&p2);
	pr2 = (p1+p2) - ((p1+p2)*0.15) + ((p1+p2)*0.07);
	v1 = pr2 + (pr2*0.07)
	printf("%.2f\n", v2);
	
	scanf("%f" ,&p3);
	pr3 = (p1+p2+p3) -((p1+p2+p3)*0.30) + ((p1+p2+p3)*0.07);
	v1 = pr3 + (pr3*0.07) 
	printf("%.2f\n", v3);
}
