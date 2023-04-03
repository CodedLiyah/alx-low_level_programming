#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to accept
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, r;
	char *start = accept;

	while (*s)
	{
		r = 0;
		while (*accept)
		{
			if (*accept)
			{
				count++;
				r = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (r == 0)
			break;
	}
	return (count);
}
