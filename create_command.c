#include "main.h"

/**
 * create_comand - create a command
 * @token: token
 * @command: original command
 * Return: new command
 */

char *create_comand(char *token, char *command)
{
	int len1, len2;
	char *file, *back = "/";

	len1 = _strlen(command);
	len2 = _strlen(token);
	file = malloc(len1 + len2 + 2);
	if (file == NULL)
	{
		free(file);
		return (NULL);
	}
	_strcpy(file, token);
	_strcat(file, back);
	_strcat(file, command);
	_strcat(file, "\0");
	return (file);
}
