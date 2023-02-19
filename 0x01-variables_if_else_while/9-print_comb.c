#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 5)
	{
		putchar(i + '0')
			i++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
