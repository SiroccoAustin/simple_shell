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
	char *delim = " \t\n\r\a";

	av = malloc(sizeof(char *));
	ret = strtok(s, delim);

	while (ret != NULL)
	{
		av[i] = malloc(sizeof(char) * (_strlen(ret) + 1));
		_strcpy(av[i], ret);
		i++;
		ret = strtok(NULL, delim);
	}
	av[i] = NULL;
	return (av);
}
