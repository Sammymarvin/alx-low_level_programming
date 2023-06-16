#include <stdio.h>
/**
* main - Entry point
*
* Return: eachtime 0 (success)
* prints :(a-z)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
