#include "main.h"
/**
* shell_strcat - Func to concatenate 2 strings and return the result.
* @des: string.
* @sr: string.
* Return: Return the pointer to the concatenated string.
*/
char *shell_strcat(char *des, char *sr)
{
	int des_len = 0, i = 0;

	while (des[des_len])
		des_len++;

	while (sr[i])
	{
		des[des_len] = sr[i];
		des_len++;
		i++;
	}
	des[des_len] = '\0';
	return (des);
}
