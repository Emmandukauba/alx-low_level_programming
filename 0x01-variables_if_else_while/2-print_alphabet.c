#include <stdio.h>

/**
 * main - alphabetical printing.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}


