#include <stdio.h>
#include "main.h"

/** _putchar - writes the character c to stout
 * @c: The character to print 
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_arguments - prints all arguments recieved
 * @argc: The number of command-line argument
 * @agrv: An array of pointers to the arguments
 */
void print_arguments(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i])
			_putchar(*argv[i]++);
		_putchar('\n');
	}
}
