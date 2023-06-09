#include "main.h"

/**
 * main - Entery point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	_purchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
