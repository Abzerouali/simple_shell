#include "main.h"
/**
* shell_strcpy - Copy a string from source to destination.
* @des: Pointer to the destination buffer.
* @sr: Pointer to the source string.
* Return: Pointer to the destination buffer (des).
*/
char *shell_strcpy(char *des, char *sr)
{
	int i;

	for (i = 0; *(sr + i); i++)
	{
		*(des + i) = *(sr + i);
	}
	*(des + i) = '\0';
	return (des);
}
