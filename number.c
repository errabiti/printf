#include "main.h"
/**
*mark_int -print number
*@n: integer.
*Return: number.
*/

int mark_int(int n)
{
	if (n == -2147483648)
	{
		_putch('-');
		_putch('2');
		print_int(147483648);
		return (1);
	}
	else if (n < 0)
	{
		_putch('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_int(n / 10);
		print_int(n % 10);
	}
	else if (n < 10)
	{
		_putch(n + '0');
	}
	return (1);
}
