#include <stdio.h>

/**
 * main - putschar printing
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	for (i = 0; i < 100; i++)
	{
		for (e = 0; e < 100; e++)
		{
			if (i < e)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				if (i != 98 || e != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

