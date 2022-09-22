#include "main.h"
/**
 * _strlen-returns the length of a string
 * @s: string
 * Return: returns length as integer;
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) !='\n')
len++;
return (len);
}
/**
 *cap_string-capitalizesallwordsinastring
 *@str:stringtocapitalize
 *Return: address of the capitalized string
 */
char *cap_string(char *str)
{
int index = 0;
while (str[++index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}')
str[index] -= 32;
}
return (str);
}
