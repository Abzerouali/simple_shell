#include "main.h"
/**
* shell_strlen - Calculate the length of a string.
* @str: Pointer to the input string.
* Return: Length of the string (number of characters).
*/
int shell_strlen(char *str)
{
	int len = 0;
	int i = 0;

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
