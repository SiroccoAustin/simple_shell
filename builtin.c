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
