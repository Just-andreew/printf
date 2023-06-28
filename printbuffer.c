#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buf: Buffer containing characters
 * @nbuf: Number of characters in the buffer
 *
 * Description: This function prints the characters stored in the buffer and
 *              resets the buffer.
 */
void print_buffer(char *buf, unsigned int nbuf)
{
	if (nbuf > 0)
	{
		write(1, buf, nbuf);
	}
}


