#include "main.h"

/**
 * append_hexa_code - a function that appends
 * >>		      ascci in hexadecimal code to buffer
 * @buffer: a pointer to an array of characters.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3 on success
 * (c) Cypherson and Mclina
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char put[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = put[ascii_code / 16];
	buffer[i] = put[ascii_code % 16];

	return (3);
}


/**
 * is_digit - checks if a character is a digit
 * @c: Char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 * (c) Cypherson and Mclina
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}



/**
 * is_printable - checks whether a character is printable
 * @c: Character to check
 * Return: 1 if c is printable, 0 otherwise
 * (c) Cypherson and Mclina
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}


/**
 * convert_size_unsgnd - puts a number to the specified size
 * @num: number to put.
 * @size: value indicating the type to put
 * Return: Cast value of number
 * (c) Cypherson and Mclina 
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}



/**
 * convert_size_number - puts a number to the specified size
 * @num: Number to put.
 * @size: parameter indicating the type to put
 * Return: Cast value of number
 * (c) Cypherson and Mclina
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
