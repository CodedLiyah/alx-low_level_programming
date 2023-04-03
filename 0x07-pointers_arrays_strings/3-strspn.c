#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: the null-terminated string to be scanned
 * @accept: the null-terminated string containing the characters to match
 *
 * Return: returns the number of bytes in the initial segment
 * of s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
