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
		return (0);

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
	return (dest);
}

/**
 * _strncmp - compare strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: 0 if successful and -1 if not
*/

int _strncmp(char *s1, char *s2, size_t n)
{

	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);

}
