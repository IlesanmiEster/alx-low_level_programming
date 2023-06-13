#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get the end of the input then add it together to size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, pi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = pi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[pi] != '\0')
		pi++;
	conct = malloc(sizeof(char) * (i + pi + 1));

	if (conct == NULL)
		return (NULL);
	i = pi = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[pi] != '\0')
	{
		conct[i] = s2[pi];
		i++, pi++;
	}
	conct[i] = '\0';
	return (conct);
}
