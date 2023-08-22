#include "main.h"

/**
 * main - main function
 * @ac: first arg
 * @argv: second arg
 * @env: third arg
 * Return: always return 0
 */


int main(int ac, char **argv, char **env)
{
	int mode, empty, j, p;
	char *lineptr = NULL, **str;

	environ = env;
	(void)ac;
	mode = isatty(STDIN_FILENO);
	while (1)
	{
		empty = 1, j = 0;
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
		my_exit(str[0]);
		my_env(str[0], env);
		execute(str, argv, env);
		free_memory(str);
		free(lineptr);
	}
	return (0);
}
