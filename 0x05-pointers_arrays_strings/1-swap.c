#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: integer a pointer
* @b: integer b pointer
* Return: 0 if successful
*/
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
