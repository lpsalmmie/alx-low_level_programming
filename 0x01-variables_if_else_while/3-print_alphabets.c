#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}