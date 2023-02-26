#include "main.h"
#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 *  @c: The character to pront 
 *
 *  REturn: on sucess 1 .
 *  On erro -1 is returned and errnois set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
