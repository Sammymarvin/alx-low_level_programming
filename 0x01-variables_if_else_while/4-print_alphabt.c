#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
* print all letters execpt a and e
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
