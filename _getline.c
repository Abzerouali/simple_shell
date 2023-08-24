#include "shell.h"
/**
* _getline - Reads a line from a file descriptor
* @buff: Buffer to store the line
* @buff_size: Size of the buffer
* @f: File descriptor
* Return: Number of characters read
*/
ssize_t _getline(char **buff, size_t *buff_size, int f)
{
	ssize_t size = 0;

	if (buff == NULL || buff_size == NULL)
		return (-1);
	if (*buff == NULL)
	{
		*buff = malloc(sizeof(char) * READ_SIZE);
		if (*buff == NULL)
			return (-1);
		*buff_size = READ_SIZE;
	}
	size = read(f, *buff, *buff_size);
	if (size == -1)
	{
		free(*buff);
		return (-1);
	}
	return (size);
}
