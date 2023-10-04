#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings into a new string
 * @s1: first string to concatenate with
 * @s2: second string to concatenate with
 * Return: s1 and s2 concatenated
 **/

char *str_concat(char *s1, char *s2)
{
	char *conctStr;
	int i = 0;
	int n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;

	conctStr = malloc(sizeof(char) * (i + n + 1));

	if (conctStr == NULL)
		return (NULL);

	i = 0;
	n = 0;

	while (s1[i] != '\0')
	{
		conctStr[i] = s1[i];
		i++;
	}

	while (s2[n] != '\0')
	{
		conctStr[i] = s2[n];
		i++;
		n++;
	}

	return (conctStr);
}
