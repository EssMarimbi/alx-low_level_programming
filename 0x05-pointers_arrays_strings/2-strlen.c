#include "main.h"

/**
* * _strlen - measures the length of a string
* * @s: input
* * Return: 0 if successful
*/

int _strlen(char *s);
{
int length = 0;
while (*s ! =0)
{
length++;
s++;
}
return (length);
}
