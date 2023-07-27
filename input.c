#include "main.h"

/**
 * command - gets command
 * Return: string
 */

char *command()
{
	char *lineptr = NULL;
	size_t size = 0;
	ssize_t eof;

	eof = getline(&lineptr, &size, stdin);

	if (eof == -1)
	{
		_printf("\n");
		exit(0);
	}

	return (lineptr);
}
