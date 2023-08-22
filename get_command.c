#include "main.h"

/**
 * get_string - tokenize the string
 * @s: string to tokenize
 * Return: pointer to string
 */

char **get_string(char *s)
{
	int i = 0, num_tokens = 0;
	char **av, *ret, *dupl, *end, *delim = " \t\n\r\a";

	dupl = _strdup(s);
	ret = strtok(dupl, delim);
	if (!s)
		return (NULL);

	while (ret != NULL)
	{
		num_tokens++;
		ret = strtok(NULL, delim);
	}

	av = malloc(sizeof(char *) * (num_tokens + 1));
	ret = strtok(s, delim);
	i = 0;
	while (ret != NULL)
	{
		if (_strlen(ret) > 0)
		{
		while (*ret && (*ret == ' ' || *ret == '\t'))
		{
			ret++;
		}
		end = ret + strlen(ret) - 1;
		while (end > ret && (*end == ' ' || *end == '\t'))
		{
			end--;
		}
		*(end + 1) = '\0';
		av[i] = strdup(ret);
		i++;
		}
		ret = strtok(NULL, delim);
	}
	av[i] = NULL;
	free(dupl);
	return (av);
}
