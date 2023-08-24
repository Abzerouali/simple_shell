#include "main.h"

/**
* handle_sign - Handle signals by writing a prompt to the terminal.
*
* This function is called when a signal is caught. It writes a prompt.
* to the standard output to indicate that the shell is ready for input.
*
* @sign: The signal number.
*
* Return: void.
*/
void handle_sign(int sign)
{
	(void)sign;
	write(STDOUT_FILENO, "\n$ ", 4);
	fflush(stdout);
}
