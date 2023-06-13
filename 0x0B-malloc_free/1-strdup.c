#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to the new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptStr;
	int i, p = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ptStr = malloc(sizeof(char) * (i + 1));

	if (ptStr == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		ptStr[p] = str[p];

	return (ptStr);
}
