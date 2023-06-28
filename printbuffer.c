#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Pointer to the index representing the buffer length
 *
 * Description: This function prints the characters stored in the buffer and
 *              resets the buffer index.
 */
void print_buffer(char *buffer, int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, buffer, *buff_ind);
		*buff_ind = 0;
	}
}

