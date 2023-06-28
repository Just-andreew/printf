#include "main.h"

/**
<<<<<<< HEAD
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
=======
 * print_buffer - Prints the contents of the buffer if it exists
 * @buf: Buffer containing characters
 * @nbuf: Number of characters in the buffer
 *
 * Description: This function prints the characters stored in the buffer and resets the buffer.
>>>>>>> 5483e7b16294c6f2316aa3b90641de4f3baf91a0
 */
void print_buffer(char *buf, unsigned int nbuf)
{
	if (nbuf > 0)
		write(1, buf, nbuf);
}

<<<<<<< HEAD
	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
=======
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
>>>>>>> 5483e7b16294c6f2316aa3b90641de4f3baf91a0
	{
		if (format[i] != '%')
		{
<<<<<<< HEAD
			if (format[i + 1] == '\0')
			{	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buffer(buffer, format[i], ibuf), len++, i--;
				}
				else
				{
					len += function(arguments, buffer, ibuf);
					i += ev_print_func(format, i + 1);
				}
			} i++;
		}
		else
			handle_buffer(buffer, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
=======
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
>>>>>>> 5483e7b16294c6f2316aa3b90641de4f3baf91a0
}
