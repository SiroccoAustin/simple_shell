#include "main.h"

char *command()
{
	char *lineptr = NULL;
	size_t size = 0;
	ssize_t eof;

	eof = getline(&lineptr, &size, stdin);
	if (eof == -1)
	{
		free(lineptr);
		exit(0);
	}
	return (lineptr);
}
