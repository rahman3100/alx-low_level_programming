#include <stdio.h>
/**
 * to print a string using recursion
 * always return 0
 */
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
