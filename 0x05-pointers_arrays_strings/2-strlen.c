#include "main.h"
/**
*  _strlen - measures the length of a string
*  @s: input
*  Return: 0 if successful
*/

int _strlen(char *s)
{
int count = 0;
 while (s[count] != '\0')
{
count++;
}
return (count);
}
