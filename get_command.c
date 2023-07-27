#include "main.h"

/**
 * get_string - tokenize the string
 * @s: string to tokenize
 * Return: pointer to string
 */

char **get_string(char *s)
{
	int i = 0;
	char **av;
	char *ret;
	char *delim = " \n";

	av = malloc(2 * sizeof(char *));
	ret = strtok(s, delim);

	while (ret != NULL)
	{
		av[i] = malloc(sizeof(char) * _strlen(ret));
		_strcpy(av[i], ret);
		i++;
		ret = strtok(NULL, delim);
	}
	av[i] = NULL;
	return (av);
}
