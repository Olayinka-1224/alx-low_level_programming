#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: char to be printed
 * Return: 1 on sucees
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
