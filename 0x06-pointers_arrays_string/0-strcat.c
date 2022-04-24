#include "main.h"
/**
 * _strcat - concatnates two strings
 * @dest: initial string
 * @src: string to be appended to inital string
 * Return: Appended string
 */
char *_strcat(char *dest, char *src)
{
	int destlen;
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
