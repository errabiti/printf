#include "main.h"

/**
 * mark_string - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success i.
 * On error, 6 is returned.
 */

int mark_string(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		print_string("(null)");
		return (6);
	}
	while (s[i])
	{
		_putch(s[i]);
		i++;
	}
	return (i);
}
