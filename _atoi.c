#include "shell.h"

/**
 * interactive - returns positive if shell is interactive mode
 * @info: handles the struct address
 *
 * Return: 1 if interactive mode, 0 if it doesnt
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - this function checks if character is a delimeter
 * @c: c is the char to be  check
 * @delim: here is the delimeter string
 * Return: 1 if true, 0 if not
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - this is the function that
 * checks for alphabetic character
 * @c: c is The char to input
 * Return: 1 if c is alphabetic, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - the work of this function is to
 *  convert a string to an integer
 * @s: s is the string to be converted
 * Return: 0 if no numbers in string, converted number if not
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

