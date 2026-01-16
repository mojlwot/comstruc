#include <stdio.h>
int main () {
	int a,b,c,d,max1,max2,min1,min2,min,max,w1,l2,rank2 ;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)? max1 = a : max1 = b ;
	(a>b)? min1 = b : min1 = a ;
	(c>d)? max2 = c : max2 = d ;
	(c>d)? min2 = d : min2 = c ;
	(min1 > min2)? min = min2 : min = min1 ;
	(min1 > min2)? w1 = min1 : w1 = min2 ;
	(max1>max2)? max = max1 : max = max2 ;
	(max1>max2)? l2 = max2 : l2 = max1 ; 
	(l2 > w1)? rank2 = l2 : rank2 = w1 ;
	printf("%d",rank2);
}
