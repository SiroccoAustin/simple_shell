#include "main.h"


void my_exit(char *str)
{
	if (_strcmp(str, "exit") == 0)
	{
		free(str);
		exit(0);
	}
}
