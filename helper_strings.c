#include "main.h"

/**
 * _strcat - combine strings
 * @dest: sest string
 * @src: src string
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j = 0;

	while (dest[len])
		len++;

	while (src[j])
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strlen - len od string
 * @s: string
 * Return: len of string
 */

int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (-1);

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copy string
 * @dest: dest string
 * @src: src string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncmp - compare strings
 * @str1: first string
 * @str2: second string
 * @n: number
 * Return: 0 if successful and -1 if not
*/

int _strncmp(const char *str1, const char *str2, int n)
{
	int i = 0;

	while (n > 0 && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: 0 on success
 */

int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
