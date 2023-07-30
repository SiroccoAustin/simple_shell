#include "main.h"

/**
 * get_string - tokenize the string
 * @s: string to tokenize
 * Return: pointer to string
 */

char **get_string(char *s)
{
	int i = 0, len = 0;
	char **av;
	char *ret;
	char *delim = " \t\n\r\a";
	char *copy, *token;

	copy = s;
	ret = strtok(copy, delim);

	while (token != NULL)
	{
		len++;
		token = strtok(NULL, delim);
	}

	av = malloc(sizeof(char *) * 1024);
	ret = strtok(s, delim);

	while (ret != NULL)
	{
		av[i] = malloc(sizeof(char) * (_strlen(ret) + 1));
		_strcpy(av[i], ret);
		i++;
		ret = strtok(NULL, delim);
	}
	av[i] = NULL;

	while (--i >= 0)
	{
		free(av[i]);
	}
	free(av);
	return (av);
}
