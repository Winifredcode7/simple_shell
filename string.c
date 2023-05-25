#include "shell.h"

/**
 * _strlen - this function returns the length of a string
 * @s: reps the string whose length to check
 *
 * Return: returns the integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this function performs lexicogarphic comparison of two strangs.
 * @s1: reps the first strang
 * @s2: reps the second strang
 * Winifredcode7
 * Return: returns negative if s1 < s2,
 * positive if s1 > s2, zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - this function checks if needle starts with haystack
 * @haystack: reps the string to search
 * @needle: reps the substring to find
 *
 * Return: returns the address of next char of haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - this function concatenates two strings
 * @dest: reps the destination buffer
 * @src: reps the source buffer
 *
 * Return: this returns pointer to destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
