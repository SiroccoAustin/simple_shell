#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int len;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str) + 1;
	ptr = (char *)malloc(len);

	if (ptr == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	_strcpy(ptr, str);
	return (ptr);
}

/**
 * free_memory - frees memory
 * @str: memory to set free
 * Return: nothing
 */

void free_memory(char **str)
{
	int i = 0;

	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

/**
 * _getenv - gets environment
 * @str: name of environ
 * Return: path to the environ
 */

char *_getenv(char *str)
{
	int i = 0;

	char *token;

	if (!environ || !str)
	{
		return (NULL);
	}

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (_strcmp(token, str) == 0)
			return (strtok(NULL, "="));
		i++;
	}
	return (NULL);
}
