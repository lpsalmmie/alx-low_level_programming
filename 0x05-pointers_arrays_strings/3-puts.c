 #include "main.h"

/**
* _puts -> prints a string
* @str: a param to _puts function
*
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
