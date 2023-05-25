#include "shell.h"

/**
 * bfree - this function frees a pointer and NULLs the address
 * @ptr: represents the address of the pointer to free
 * Winifredcode7
 * Return: returns 1 if freed, or 0 if not
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
