#include "main.h"

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * @env: third arg
 * Return: always return 0
 */

int main(int ac, char *av[], char **env)
{
	int mode, i = 0;
	char *lineptr = NULL;
	char **str;
	(void)ac;
	(void)av;
	while (1)
	{
		mode = isatty(STDIN_FILENO);
		if (mode == 1)
		{
		_printf("$: ");
		}
		lineptr = command();
		if (lineptr == NULL)
			break;

		str = get_string(lineptr);
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
