#include "main.h"
/**
*len - lenght of number
*@num: integer.
*Return: lenght of the number.
*/

int len(int num)
{
	if (num == 0)
		return (0);
	return (1 + len(num / 10));
}
