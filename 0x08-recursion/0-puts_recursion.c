#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: enter
 *
 * Return: Always 0 (done)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
