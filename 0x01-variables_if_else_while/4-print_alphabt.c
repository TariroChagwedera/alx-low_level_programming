#include <stdio.h>
/**
 *main - Entry point
 *Description: prints alphabet in except q and e
 *Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
