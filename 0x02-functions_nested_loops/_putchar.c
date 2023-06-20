#include "main.h"
#include <unistd.h>
/**
 * _putchar - print out the exact _putchar
 * Emmanuel: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno set accordingly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
