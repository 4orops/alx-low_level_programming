#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *newStr;
	int i = 0;
	int n = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	newStr = malloc(sizeof(char) * (i + 1));

	if (newStr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		newStr[n] = str[n];

	return (newStr);
}

