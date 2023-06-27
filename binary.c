#include "main.h"

/**
 * fill_binary_array - Convert a decimal number to binary representation.
 * @binary: Pointer to the binary representation.
 * @int_in: Input decimal number.
 * @isneg: Indicator if the input number is negative.
 * @limit: Size of the binary representation.
 *
 * Return: Pointer to the binary representation.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';

	for (i = limit - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			binary[i] = '0';
		else
			binary[i] = (int_in % 2) + '0';
		int_in /= 2;
	}

	if (int_in != 0)
		binary[i] = '1';

	if (isneg)
	{
		for (i = 0; binary[i]; i++)
		{
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
		}
	}

	return (binary);
}

