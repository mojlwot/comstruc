#include <stdio.h>
int main (void)
{
int i;
// Statements
i=1;
while ( i <= 3) {
printf("Row %d: ", i);
for (int j = 1; j<= 5; j++)
printf("%3d", j);
printf("\n");
i++;
} // for i
return 0;
} // main
