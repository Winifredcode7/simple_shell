#include "shell.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: reps the pointer to the memory area
 * @b: reps the byte to fill *s with
 * @n: reps the amount of bytes to be filled
 * Return: returns (s) a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - this function frees a string of strings
 * @pp: reps the string of strings
 * Winifredcode7
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - this function reallocates a block of memory
 * @ptr: reps the pointer to previous malloc'ated block
 * @old_size: reps the byte size of previous block
 * @new_size: reps the byte size of new block
 *
 * Return: returns pointer to da ol'block nameen.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
