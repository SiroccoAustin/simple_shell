#include "main.h"

/**
 * execute - execute command
 * @av: arguments to execute
 * @argv: command line arg
 * @env: environmental argument
 * Return: 0 if unsuccessful
 */

int execute(char **av, char **argv, char **env)
{
	int i, status;
	char *command, *path_command, *cd = "cd", *directory = "cd .";
	pid_t pid;

	if (!av || !env)
	{
		perror("./hsh");
		return (-1);
	}

	pid = fork();

	if (pid == 0)
	{
		command = av[0];
		path_command = get_path(command, env);
		if (access(path_command, F_OK) == -1 && command != cd && command != directory)
		{
			print_error(command, argv[0]);
			free(path_command);
			exit(0);
		}
		else
			i = execve(path_command, av, env);
		if (i == -1)
		{
			perror("./hsh");
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
		if (wait(&status) == -1)
			return (-1);
	return (WIFEXITED(status) ? WEXITSTATUS(status) : -1);
}
