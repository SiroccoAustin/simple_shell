#include "main.h"

/**
 * command - gets command
 * Return: string
 */

char *command()
{
	char *lineptr;
	size_t size = 0;
	ssize_t eof;
	/*_printf("$: ");*/
	eof = getline(&lineptr, &size, stdin);

	if (eof == -1)
	{
		return (NULL);
	}

	return (lineptr);
}
