#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buf: Buffer containing characters
 * @nbuf: Number of characters in the buffer
 *
 * Description: This function prints the characters stored in the buffer and resets the buffer.
 */
void print_buffer(char *buf, unsigned int nbuf)
{
	if (nbuf > 0)
		write(1, buf, nbuf);
}

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of printed characters
 *
 * Description: This function prints formatted output to stdout according to
 *              the format specifier in the format string.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision;
	unsigned int buff_ind = 0;
	va_list list;
	char buffer[1024];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == 1024)
			{
				print_buffer(buffer, buff_ind);
				buff_ind = 0;
			}
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, buff_ind);
			buff_ind = 0;
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			if (format[i] == '\0')
				return (-1);
			i++;
			printed = handle_print(format, &i, list, buffer, flags, width, precision);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, buff_ind);

	va_end(list);

	return (printed_chars);
}

