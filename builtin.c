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
