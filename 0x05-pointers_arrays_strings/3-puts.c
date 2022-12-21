#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: the length of a string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
