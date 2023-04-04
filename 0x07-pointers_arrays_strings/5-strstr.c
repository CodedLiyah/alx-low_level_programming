#include "main.h"
/**
 * _strstr - locate the sbstring
 * @haystack: find the first occurence of the substring
 * @needle: string to be checked
 * Return: Returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *r = haystack;
		char *m = needle;

		while (*haystack && *m && *haystack == *m)
		{
			haystack++;
			m++;
		}

		if (!*m)
			return (r);

		haystack = r + 1;
	}
	return ('\0');
}
