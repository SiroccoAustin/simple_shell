#include "main.h"

/**
 * my_exit - exit shell when user input exit
 * @str: str arg
 * Return: nothing
 */

void my_exit(char *str)
{
	if (_strcmp(str, "exit") == 0)
	{
		free(str);
		exit(0);
	}
}

/**
 * my_cd - change directory
 * @str: name of directory
 * Return: 1 on success
 */

int my_cd(char **str)
{
	if (_strcmp(str[0], "cd") == 0)
	{
		if (str[1] == NULL)
			chdir(getenv("HOME"));
		else
			chdir(str[1]);
	}
	return (1);
}

/**
 * my_env - print environ
 * @str: string arg
 * @env: environ arg
 * Return: 0 on success
 */

int my_env(char *str, char **env)
{
	int i = 0;

	if (_strcmp(str, "env") == 0)
	{
		while (env[i] != NULL)
		{
			write(1, env[i], _strlen(env[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
