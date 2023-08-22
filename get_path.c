#include "main.h"

/**
 * get_path - finds directory of file
 * @command: command arg
 * @env: env args
 * Return: directory id successful return null if not
 */

char *get_path(char *command, char **env)
{
	int i = 0;
	char *path = NULL, *file, *token, *test = "PATH=";
	struct stat buf;

	while (env[i] != NULL)
	{
		if (_strncmp(env[i], test, 5) == 0)
		{
			path = _strdup(env[i] + 5);
			break;
		}
		i++;
	}

	if (path != NULL)
	{
		token = strtok(path, ":");

		while (token != NULL)
		{
			file = create_comand(token, command);
			if (stat(file, &buf) == 0)
			{
				free(path);
				return (file);
			}
			free(file);
			token = strtok(NULL, ":");
		}
		free(path);
		if (stat(command, &buf) == 0)
		{
			return (command);
		}
		return (NULL);
	}
	return (NULL);
}
