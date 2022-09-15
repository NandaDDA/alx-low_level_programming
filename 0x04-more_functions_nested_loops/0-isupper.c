#include "main.h"
/*
 * _isupper-Checks for uppercase alphabets.
 * @c an integar parameter.
 * Returns 1 if successful else 0
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
