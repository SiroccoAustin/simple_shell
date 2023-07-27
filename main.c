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
	char *lineptr = NULL;
	char **str;
	(void)ac;
	(void)av;
	while (!feof(stdin))
	{
		_printf("$: ");
		lineptr = command();
		str = get_string(lineptr);
		execute(str, env);

		free(lineptr);
		free(str);
	}
	return (0);
}
