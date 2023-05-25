#include "shell.h"

/**
 **_strncpy - The function copies a string
 *@dest: this is the destination string to be copied to
 *@src: here is the source string
 *@n: the amount of characters to be copied
 *Return: returns the concatenated string
 *Winifredcode7
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - the function that concatenates two strings
 *@dest: dest is the first string
 *@src: src is the second string
 *@n: n is the amount of bytes to be maximally used
 *Return: Returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - the function that locates a character in a string
 *@s: s is the string to be parsed
 *@c: this is the character to look for
 *Return: (s) a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
