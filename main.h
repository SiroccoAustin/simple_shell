#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>


char **get_string(char *s);
char *command();
char *get_path(char *command, char *env[]);
int execute(char **av, char **argv, char **env);
int _printf(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strncmp(const char *s1, const char *s2, int n);
int _strcmp(const char *s1, const char *s2);
char *_strdup(char *str);
void free_memory(char **str);
void my_exit(char *str);
char *create_comand(char *token, char *command);
char *_strcpy(char *dest, char *src);
void print_error(char *command, char *filename);

#endif /*MAIN_H*/
