#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,d;
	float A,B,C,D,E;
	
	// case 4.1
	a=1;b=1;c=5;d=1;
	A = (3.0*a/5.0)+1.0/b;
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c)-5.0*d));
	D = sqrt((2.0+8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("4.1 \n");
	printf("WS2A=%.2f\n",A); printf("WS2B=%.2f\n",B); printf("WS2A=%.2f\n",C); printf("WS2D=%.2f\n",D); printf("WS2E=%.2f\n",E);
	
	// case 4.2
	a=9;b=2;c=0;d=1;
	A = (3.0*a/5.0)+1.0/b;
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c)-5.0*d));
	D = sqrt((2.0+8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("4.2 \n");
	printf("WS2A=%.2f\n",A); printf("WS2B=%.2f\n",B); printf("WS2A=%.2f\n",C); printf("WS2D=%.2f\n",D); printf("WS2E=%.2f\n",E);
	
	//case 4.3
	a=0;b=3;c=3;d=3;
	A = (3.0*a/5.0)+1.0/b;
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c)-5.0*d));
	D = sqrt((2.0+8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("4.3 \n");
	printf("WS2A=%.2f\n",A); printf("WS2B=%.2f\n",B); printf("WS2A=%.2f\n",C); printf("WS2D=%.2f\n",D); printf("WS2E=%.2f\n",E);
}
