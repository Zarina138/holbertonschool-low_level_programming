#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: EHH BETTY EHHH.
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
