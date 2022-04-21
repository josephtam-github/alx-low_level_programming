#include "main.h"

/**
 * _strlen - returns lengtt of a string
 *@s: string to be counted
 * Return: number of strings (success)
 */
int _strlen(char *s)
{
	int count;

	count = sizeof(s) * 2;
	if (count < 1)
	{
		return (0);
	}
	else
	{
		return (count);
	}
}
