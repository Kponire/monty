#include "monty.h"

/**
 * isnumber - checks if the given string is a number
 * @str: the input string
 * Return: 1 if its a number else 0
 */

int isnumber(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * _isalpha - checks if the integer is an alphabet
 * @c: the given integer
 * Return: 1 if alpha else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
