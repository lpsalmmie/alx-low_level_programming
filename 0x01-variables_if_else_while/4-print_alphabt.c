#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both except e and q
 *
 * Retun: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
