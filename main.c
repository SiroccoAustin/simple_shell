#include "main.h"

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * @env: third arg
 * Return: always return 0
 */

int main(int ac, char *av[], char *env[])
{
	int mode, i = 0, empty, j = 0, p;
	char *lineptr = NULL;
	char **str;
	(void)ac;
	(void)av;
	mode = isatty(STDIN_FILENO);
	while (1)
	{
		empty = 1;
		if (mode == 1)
		{
		_printf("$ ");
		}
		lineptr = command();
		p = strlen(lineptr);
		while (j < p)
		{
			if (lineptr[j] != '\n' && lineptr[j] != ' ' && lineptr[j] != '\t')
			{
				empty = 0;
				break;
			}
			j++;
		}
		if (empty)
		{
			free(lineptr);
			continue;
		}
		str = get_string(lineptr);

		if (strcmp(str[0], "exit") == 0)
		{
			break;
		}
		execute(str, env);
		
		i = 0;

		while (str[i] != NULL) 
		{
			free(str[i]);
			i++;
    	}
		free(lineptr);
		free(str);
		
	}
	return (0);
}
