#include "main.h"

char *_strdup(char *str)
{
	int len;

	char *ptr;

	if (str == NULL)
	{
		return NULL;
	}

	len = _strlen(str) + 1;
	ptr = (char *)malloc(len);

	if (ptr == NULL)
	{
		perror("malloc");
		return NULL;
	}

	_strcpy(ptr, str);
	return (ptr);
}

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
