#include "main.h"

/** 
 * main -Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	while (*argv[0])
		_putchar(*argv[0]++);
	_putchar('\n');

	return (0);
}
