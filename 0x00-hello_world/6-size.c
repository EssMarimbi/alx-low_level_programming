#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of a char: 1 byte(s)\n", sizeof(d));
printf("size of an int: 4 byte(s)\n", sizeof(a));
printf("size of a long int: 4 byte(s)\n", sizeof(b));
printf("size of a long long int: 8 byte(s)\n", sizeof(c));
printf("size of a float: 4 byte(s)\n", sizeof(f));
return (0);
}
