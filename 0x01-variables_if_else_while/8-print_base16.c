#include <stdio.h>

/**
  * main - start
  * Return: 0
  */

int main(void)
{
	int hex = '0';

	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}

	hex = 'a';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
