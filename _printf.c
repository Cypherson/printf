#include "main.h"

/**
 * print_buffer - prints the contents of the buffer if it exist
 *
 * @buffer: Array of characters
 *
 * @buff_ind: Index at which to add next char, represents the length of buffer.
 */


void print_buffer(char buffer[], int *buff_ind)
{
        if (*buff_ind > 0)
                write(1, &buffer[0], *buff_ind);

        *buff_ind = 0;


/**
 * _printf - a printf function.
 *
 * @format: a pointer to format.
 *
 * Return: a pointer to printed characters.
 *
 * (c) Cypherson
 */

int _printf(const char *format, ...)
{
	int index, print = 0, printed_char = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (index = 0; format && format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			buffer[buff_ind++] = format[index];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_char++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &index);
			width = get_width(format, &index, list);
			precision = get_precision(format, &index, list);
			size = get_size(format, &index);
			index++;
			print = handle_print(format, &index, list, buffer,
				flags, width, precision, size);
			if (print == -1)
				return (-1);
			printed_char += print;
		}
	}

	print_buffer(buffer, &buff_ind);
	
	va_end(list);

	return (printed_char);
}
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
