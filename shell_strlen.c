#include "main.h"

/**
 * shell_strcmp - Func to compare two strings lexicographically.
*@str1: First string
*@str2: Second string
*Return: The difference between the differing characters ASCII values
*/
int shell_strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}
