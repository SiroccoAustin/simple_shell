#include "main.h"

/**
 * execute - execute command
 * @av: arguments to execute
 * @env: environmental argument
 * Return: 0 if unsuccessful
 */

int execute(char *av[], char *env[])
{
	int i, status;
	char *command, *path_command;
	pid_t pid;

	if (!av || !env)
	{
		perror("./shell: No such file or directory");
		return (-1);
	}

	pid = fork();

	if (pid == 0)
	{
		command = av[0];
		path_command = get_path(command, env);

		i = execve(path_command, av, env);
		if (i == -1)
		{
			perror("./shell: No such file or directory");
			free(path_command);
			exit(EXIT_FAILURE);
		}
	}
	if (pid < 0)
	{
		perror("./shell");
		return (-1);
	}
	else
	{
		if (wait(&status) == -1)
			return (-1);
	}
	return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
}
