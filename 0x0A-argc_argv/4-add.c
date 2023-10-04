#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declare a variable*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str is a digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - main program
 * @argc: Count no arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*looop through the arrya*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /* convert string to int*/
			sum += str_to_int;
		}

		/*check if the symbols are digit*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

