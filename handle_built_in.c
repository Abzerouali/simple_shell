#include "main.h"
/**
* handle_built_in - Handle shell built-in commands (func).
*
* @arg: Array of strings containing the command and its arguments.
* @input_buff: Pointer to the user input buffer.
* @exit_num: Exit status for the "exit" command if provided.
*
* Return: 1 if a built-in command is handled, 0 otherwise.
*/
int handle_built_in(char **arg, char *input_buff, int exit_num)
{
	char **envir;
	int exit_sta = EXIT_SUCCESS, i;

	if (strcmp(arg[0], "exit") == 0)
	{
		if (arg[1])
			exit_sta = atoi(arg[1]);
		else if (exit_num != -1)
			exit_sta = exit_num;
		for (i = 0; arg[i] != NULL; i++)
		{
			free(arg[i]);
			arg[i] = NULL;
		}
		free(arg);
		free(input_buff);
		exit(exit_sta);
	}
	else if (strcmp(arg[0], "envir") == 0)
	{
		for (envir = environ; *envir; ++envir)
			printf("%s\n", *envir);
		free_arg(arg);
		return (1);
	}
	return (0);
}
