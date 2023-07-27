#include "main.h"

/**
 * _printf - prints elements
 * @s: string
 * Return: number of strings
 */

int _printf(char *str)
{
	int i = 0, value, count;
	while (str[i])
	{
		value = write(1, &str[i], 1);
		count += value;
		i++;
	}
	return (count);
}
