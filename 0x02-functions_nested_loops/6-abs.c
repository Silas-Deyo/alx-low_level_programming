#include "main.h"

/**
 * _abs - computers an integer's absolute value
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
