#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */

int main(void)
{
	char alpha_lower = 'a';
	char alpha_upper = 'A';

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}

	while (alpha_upper <= 'Z')
	{
		putchar(alpha_upper);
		alpha_upper++;
	}

	putchar('\n');

	return (0);
}
