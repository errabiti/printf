#include "main.h"

/**
 * _putch - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putch(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int comp = 0;

	va_list args;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c;

				c = va_arg(args, int);
				comp += _putch(c);
			}
			else if (*format == 's')
			{
				char *str;

				str = va_arg(args, char *);
				comp += mark_string(str);
			}
			else if (*format == '%')
			{
				_putch('%');
				comp++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int nu;

				nu = va_arg(args, int);
				if (nu < 0)
				{
					comp++;
				}
				comp += len(nu);
				mark_int(nu);
			}
			else
			{
				_putch('%');
				comp++;
				if (*format)
				{
					_putch(*format);
					comp++;
				}
			}
			format++;
		}
		else
		{
			_putch(*format);
			format++;
			comp++;
		}
	}
	return (comp);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	_printf("%d %i %s %c\n", -35689, 34567, "bro", 'H');
	return (0);
}

