#include "main.h"

/**
* _strlen - return the length of a string
* @s: char to checl
* Description: this will return the length of a string
* Return: 0
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
