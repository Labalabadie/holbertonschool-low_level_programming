#include "main.h"
/**
 *_strchr -  locates a character in a string.
 *@s:String
 *@c: Character to look for
 *Return: Given String.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}
