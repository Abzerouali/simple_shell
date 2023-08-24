#include "main.h"
/**
* ReadUser_input - Read user input from standard input.
* @input_buff: Pointer to the buffer to store the user input.
* @buff_size: Pointer to the size of the buffer.
* Return: Number of characters read, or -1 on failure.
*/
ssize_t ReadUser_input(char **input_buff, size_t *buff_size)
{
	ssize_t read_no;

	read_no = getline(input_buff, buff_size, stdin);
	if (read_no == -1)
	{
		if (!isatty(STDIN_FILENO))
			return (-1);
		free(input_buff);
		perror("getline()");
		exit(EXIT_FAILURE);
	}
	if ((*input_buff)[read_no - 1] == '\n')
		(*input_buff)[read_no - 1] = '\0';

	return (read_no);
}
