#include "main.h"

/**
 * print_error - prints an error message
 * @command: wrong command you input
 * @filename: name of the file you executed
 * Return: nothing
 */

void print_error(char *command, char *filename)
{
	char error_mgs[] = ": 1: ";
	char found[] = ": not found\n";

	write(STDERR_FILENO, filename, _strlen(filename));
	write(STDERR_FILENO, error_mgs, sizeof(error_mgs) - 1);
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, found, sizeof(found) - 1);
}
