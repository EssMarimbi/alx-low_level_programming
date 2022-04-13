#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*Description: main - Prints a random numbber and states whether
*it prints a positive or negative or a zero
*
*Return : Always 0 if successful
**/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
