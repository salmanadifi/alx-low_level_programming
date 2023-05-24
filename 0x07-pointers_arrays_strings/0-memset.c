 #include "main.h"

/**
* _memset - a function that fills memory with a constant byte.
*
* @s: input
* @b: input
* @n: input
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
