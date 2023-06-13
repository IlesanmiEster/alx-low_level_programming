#include "main.h"
#include <stdlib.h>
/**
 * argstostr - The main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, p = 0, l = 0;
	char *ptArray;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	ptArray = malloc(sizeof(char) * l + 1);
	if (ptArray == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		ptArray[p] = av[i][n];
		p++;
	}
	if (ptArray[p] == '\0')
	{
		ptArray[p++] = '\n';
	}
	}
	return (ptArray);
}
