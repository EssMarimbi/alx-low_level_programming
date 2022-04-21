#include "main.h"
/**
* _puts - prints a string then a new line
* @str: string to print
*Return: nothing
*/

void _puts(char *str)
{
int i;
for (i = 0; (str + i) ! = 0; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
