#include <stdio.h>
/**
 * main - this program is to print the size of sizes of computers compiled
 * Description: the main function is unspecified
 * parameter: the parameters
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
float d;
long long int w;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
