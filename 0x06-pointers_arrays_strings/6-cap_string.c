#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 * Return: address of s
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
