#include <stdio.h>

/**
 * main - prints the alphabet in lowecase
 * follwed buy a new line, except q and e
 * Return: Alywas 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
