#include "main.h"
/*
 * _isupper-Checks for uppercase alphabets.
 * @c an integar parameter.
 * Return: 1 whether it is, 0 otherwise.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
