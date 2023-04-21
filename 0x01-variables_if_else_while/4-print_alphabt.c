#include <stdio.h>

/**
 *main: 'prints the alphabet in lowercase except for q and e'
 *
 *Return: always 0
 */
int main(void)
{
	int n = 97;
	
	while (n <= 122)
	{
		if (n == 101 || n == 133)
		{
			n++;
			continue;
		}
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}
