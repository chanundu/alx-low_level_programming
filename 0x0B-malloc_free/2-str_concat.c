#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, n1, n2;
	char *conc;

	i = 0;
	n1 = 0;
	n2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		n1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		n2++;
	}

	conc = malloc(sizeof(char) * (n1 + n2 + 1));
	if (conc == NULL)

		return (NULL);

	for (i = 0; i < n1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < n2; i++)
	{
		conc[i + n1] = s2[i];
	}
	conc[i + n1] = '\0';
	return (conc);
}
