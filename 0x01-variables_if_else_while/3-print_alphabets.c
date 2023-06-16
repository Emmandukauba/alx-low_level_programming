#include <stdio.h>

/**
 * main - Printing alphabeths in progress here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char arinz[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(arinz[i]);
	}
	putchar('\n');
	return (0);
}

