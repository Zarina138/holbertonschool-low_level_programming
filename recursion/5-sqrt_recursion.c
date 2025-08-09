#include "main.h"

/**
 *  _sqrt_recursion - the natural square root of a number
 *  _sqrt_helper: Komekci funksiya
 *  @i: i ,kokalti eded deye bilerik bir nov
 *  @n: n
 *  Return: Return right answer
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
