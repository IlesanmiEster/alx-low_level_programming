#include "main.h"
/**
* _strlen_recursion - Returns length of string.
* @s: String to be measured.
*
* Return: Length of string.
*/
int _strlen_recursion(char *s)
{
int longit;

if (*s == '\0')
{
return (0);
}
else
{
longit = 1 + _strlen_recursion(s + 1);

}
return (longit);
}
