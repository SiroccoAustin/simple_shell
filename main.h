#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

char **get_string(char *s);
char *command();
char *get_path(char *command, char *env[]);
int execute(char **av, char **env);
int _printf(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strncmp(char *s, char *s2, size_t n);
char *create_comand(char *token, char *command);
char *_strcpy(char *dest, char *src);

#endif /*MAIN_H*/
